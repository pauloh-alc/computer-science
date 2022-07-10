/* 
 
    Discente.......: Paulo Henrique Diniz de Lima Alencar.
    Matrícula......: 494837
    Curso..........: Ciência da Computação.
    Tema...........: Árvore de Huffman - realizando compressão e descompressão de arquivos .txt
    
    Assuntos usados:
        * Listas Encadeadas..........................................................01
        * Fila.......................................................................02
        * Árvore Binária.............................................................03
        * Árvore de Huffman..........................................................04
        * Arquivos...................................................................05
        * Conversão de Base [Binária --> Decimal e Decimal --> Binária]..............06
        * Vetores....................................................................07
        * Alocação dinâmica de memória...............................................08
        * String.....................................................................09
        * Funções....................................................................10
        * Bytes, números e caracteres................................................11 
        
        Referências:
        https://www.ime.usp.br/~pf/estruturas-de-dados/aulas/huffman.html
        https://www.ime.usp.br/~pf/estruturas-de-dados/aulas/compress.html
        https://www.ime.usp.br/~pf/algoritmos/aulas/bytes.html
        https://www.ime.usp.br/~pf/algoritmos/apend/unicode.html#utf-8
        https://youtu.be/-TonlL3vcGk
        https://youtu.be/UEqQbF35730
        https://youtu.be/Tl4x219Ri4k
        
*/

// OBSERVAÇÃO ---> Para ler os comentários, recomendo diminuir o ZOOM, para facilitar na leitura !!

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


// Estrutura do tipo No: utilizada para criar minha LDE e minha Árvore de Huffman.
typedef struct no {
    int freq;
    char c; 
    struct no* prox;
    struct no* ant;
   
    struct no* esq;
    struct no* dir;
}No;


// Raiz da Árvore de Huffman:
No* raiz = NULL;


// Início, Fim e tamanho da LDE:
No* inicio = NULL;
No* fim    = NULL;
int tam = 0;


// Estrutura do tipo No_fila: utilizada para criar uma fila
typedef struct no_fila{
    char valor;
    struct no_fila* prox;
} No_fila;


// Início, fim e tamanho da minha Fila:
No_fila* inicio_fila = NULL;
No_fila* fim_fila    = NULL;
int tam_fila = 0;


// Procedimento: responsável por exibir mensgens de erros.
void Error (char* msg) {
    printf("Error: %s!!\n",msg);
    exit(1);
}


// Procedimento: responsável por inserir um Nó em uma Lista Duplamente Encadeada, de Maneira 'Ordenada' e crescente.
void insere_no_na_lista (char c, int freq, No* x) { 
     No* novo;

     if (x == NULL) {
         novo = (No*) malloc (sizeof(No));
         
         novo -> freq = freq;
         novo -> c = c;
         
         novo -> prox = NULL;
         novo -> ant = NULL;
         
         novo -> esq = NULL;
         novo -> dir = NULL;
     }
     else {
         novo = x;   
     }
  
    // 1° CASO: LDE está vazia.
    if (inicio == NULL) {
        inicio = novo;
        fim    = novo;
    }
    // 2° CASO: Nó que desejo adicionar é maior que o Último Nó da LDE.
    else if (novo -> freq >= fim -> freq){
        fim -> prox = novo;
        novo -> ant = fim;
        fim = novo;
    }
    // 3° CASO: Nó que desejo adicionar é menor que o Primeiro Nó.
    else if (novo -> freq <= inicio -> freq && tam >= 1) {
        novo -> prox = inicio;
        inicio -> ant = novo;
        inicio = novo;
    }
    // 4° CASO: Nó que desejo adicionar deve ficar entre DOIS Nós.
    else {
        No* aux = inicio;
        while (aux != NULL) {
            if (novo -> freq >= aux -> freq && novo -> freq <= aux -> prox -> freq) {
                aux = aux -> prox;

                aux -> ant -> prox = novo;
                novo -> ant = aux -> ant;
                aux -> ant = novo;
                novo -> prox = aux;
                break;
            }
            aux = aux -> prox;
        }    
    }
    tam++;
}


// Função: obtém todos os caracteres do arquivo que será comprimido:
char* pegar_caracteres_do_txt (char* arquivo_para_comprimir) {

    // Dicionário de dados: 
    FILE* arquivo;
    int qtd = 0;
    char c, *vetor, *ptr;
    //.....................
    
    // Abrindo arquivo para obter caracteres:
    if (!(arquivo = fopen(arquivo_para_comprimir, "rt"))) {
        Error("problema na hora de abrir o arquivo");
    }
    
    while ((c = fgetc(arquivo)) != EOF) {
        qtd = qtd + 1;
    }
  
    vetor = (char*) malloc (qtd * sizeof(char));
    ptr = vetor;

    fseek(arquivo, 0, SEEK_SET);
    while ((c = fgetc(arquivo)) != EOF) {
         *vetor = c; // colocando caracteres encontrados no texto no vetor.
         vetor += 1;
    }
    *vetor = '\0';
    fclose(arquivo);

    return ptr;
}


/* 
   Procedimento: responsável por determinar o número de ocorrência de cada caractere. Cada frequência
   contabilizada é colocada em um vetor, onde seu (valor) representa a frequência e seu [índice] um valor
   correspondente na tabela ASCII.
   
   Obs...: Função foi inspirada em um problema parecido que o professor Eurinardo resolveu em sala.
           Porém, na questão que ele passou, precisavamos determinar a ocorrência de cada número em
           um determinado vetor[...]. 
*/ 
void ocorrencia_caractere (char *v, int* lista_freq_caracter) {
    int freq, j;
    
    for (int i = 0; v[i] != '\0'; i++) {
        j = 0;
        while (j < i && v[i] != v[j]) j++;
        
        if (j == i) {
            freq = 1;
            for (int j = i + 1; v[j] != '\0'; j++) {
                if (v[i] == v[j]) freq++;
            }
            lista_freq_caracter[v[i]] = freq; // armazenando a frequência no vetor.
        }    
    } 
}


// Procedimento: responsável por imprimir a LDE.
void imprimir_lista () {
    No* aux = inicio;
    while (aux != NULL) {
        
        if (aux -> freq == 1) printf(" %c --> %d vez.\n",aux -> c,aux -> freq);
        else                  printf(" %c --> %d vezes.\n",aux -> c,aux -> freq);
        aux = aux -> prox;
    }
}


/* Função: responsável por fazer uma cópia do Nó que possui menor frequência da LDE e após isso remover esse Nó da LDE (Vai desconectar esse nó da LDE).
           O Nó copiado será fixado futuramente na Árvore de Huffman.
   
   Obs 1: Remover o Nó de menor frequência se torna uma tarefa "fácil", pois minha LDE está ordenada de forma crescente, 
          então basta sempre remover o Nó que o ponteiro 'início' está apontando e fazer o 'inicio' apontar para o Nó seguinte. 
*/
No* remover_menor () {
    No* lixo;
    
    lixo   = inicio;
    inicio = inicio -> prox;    

    // Realizando cópia do nó que será removido:
    No* menor = (No*) malloc (sizeof(No));
    menor -> freq = lixo -> freq;
    menor -> c = lixo -> c;
    
    
    // Se o Nó que desejo remover, tem filhos:
    if (lixo -> esq != NULL || lixo -> dir != NULL) { 
        menor -> esq = lixo -> esq;
        menor -> dir = lixo -> dir; 
    }
    // Se o Nó que desejo remover, não posssui filhos.
    else { 
        menor -> esq = NULL;
        menor -> dir = NULL; 
    }
    
    tam--;
    free(lixo);
     
    return menor;    
}


/* 
    Função: responsável por criar e copular um Nó pai da Árvore de Huffman.
    
    A frequência do Nó pai = frequência do filho esquerdo (+) frequência do filho direito
    
    filho0 - filho direito .
    filho1 - filho esquerdo.

*/
No* criando_no_arvore (char ch, int freq0, int freq1) {
    
    No* pai = (No*) malloc (sizeof(No));
    pai -> esq = NULL;
    pai -> dir = NULL;
    pai -> prox = NULL;
    pai -> ant = NULL;
    pai -> freq = freq0 + freq1;
    pai -> c = ch;

    return pai;
}


// Procedimento: responsável por construir LDE fazendo uso da função insere_no_na_lista(...).
void criando_lde(int* lista_freq_caracter) {
    /* 1° Criando Minha LDE com base nas 'frequências' de cada 'caractere' encontrado no arquivo .txt:
     
     i...........................: representa um número inteiro que corresponde a determinado caractere no CÓDIGO ASCII.
     lista_freq_caracter[0-255]..: o valor presente em cada posição representa a frequência do caractere.
     Por que até 256?............: 1 byte tem [8 bits], portanto 2^8 = 256 possibilidade de caractere na tabela ASCII 
     Quando o caractere tiver frequência 0 (zero) não será criado nenhum Nó para ele.
     
     Obs: O português usa apenas 127 caracteres e o inglês fica satisfeito com 94 caracteres.
     
     https://www.ime.usp.br/~pf/algoritmos/apend/unicode.html#utf-8
     
    */ 
    for (int i = 0; i < 256; i++) {
        if (lista_freq_caracter[i] != 0) {
            insere_no_na_lista(i, lista_freq_caracter[i], NULL);
        }
    }
}

/*
    Função: responsável por criar a ÁRVORE DE HUFFMAN, foi baseado no seguinte algoritmo -->
    
    1° No início de cada iteração, temos um conjunto de Nós, isto é, minha LDE;
    2° Escolha dois Nós, digamos x e y, que tenham frequência mínima;
    3° Crie um Nó Pai e faça com que x e y sejam filhos desse Nó;
    4° Faça com que a frequência desse Pai seja igual a soma da frequência de x e y;
    5° Conecte o Nó pai aos outros Nós, para ir criando a Árvore;
    6° Repita esse processo até que o conjunto de Nós presente na LDE possua somente 1 Nó.
    
    Referência: https://www.ime.usp.br/~pf/estruturas-de-dados/aulas/huffman.html

*/
No* criando_arvore_huffman () {
    No *filho0, *filho1, *pai;
    
    printf("......... PROCESSO DE CONSTRUÇÃO DA ÁRVORE .........\n");
    imprimir_lista();
    // Algoritmo de construção da Árvore de Huffman:
    while (tam > 1) {
       // 2°
       filho0 = remover_menor();
       filho1 = remover_menor();
       
       
       // 3° e 4°
       pai = criando_no_arvore('+',filho0 -> freq, filho1 -> freq);
       pai -> esq = filho1;
       pai -> dir = filho0;
       
       //5°
       insere_no_na_lista ('+', 0, pai);
     
       printf("\n");
       imprimir_lista();
       printf("\n"); 
    }
    
    pai = remover_menor(); 
    
    return pai; // Raíz da Árvore de Huffman.
}


// Procedimento: responsável por imprimir a Árvore de Huffman em Pré-Ordem.
void in_ordem (No* aux) {
    if (aux -> esq != NULL)
        in_ordem (aux -> esq);

    printf("%c = %d ",aux -> c, aux->freq);

    if (aux -> dir != NULL)
        in_ordem (aux -> dir);
}


/* 
    Função: responsável por percorrer a Árvore de Huffman e GERAR o código correspondente para cada caractere.
    
    Exemplo aleatório:
    
    !  vai gerar o código ---> 101
    A  vai gerar o código ---> 0
    B  vai gerar o código ---> 1111
    C  vai gerar o código ---> 110
    [...]
*/
int gera_codigo(No* aux, char c, char *codigo, int tam) {
    
    int sinalizador = 0;
    
    // Como toda letra é uma FOLHA é necessário a seguinte condição: SE for folha e SE é o caractere que estou querendo gerar o código
    // encerro o armazenamento dos caminhos [0 para esquerda | 1 para direita]
    if (aux -> esq == NULL && aux -> dir == NULL && aux -> c == c) { 
        codigo[tam] = '\0';
        return 1;
    }
   
    sinalizador = 0;
    
    if (aux -> esq != NULL) {
        codigo[tam] = '0';
        sinalizador = gera_codigo(aux -> esq, c, codigo, tam + 1);
    }

    if (aux -> dir != NULL && sinalizador == 0) {
        codigo[tam] = '1';
        sinalizador = gera_codigo(aux -> dir, c, codigo, tam + 1);
    }
    return sinalizador;    
}


// Função: responsável por determinar a quantidade de caracteres presente em uma "string".
int minha_strlen (char* v) {
    int qtd = 0;
    while (*v != '\0') {
        qtd += 1;
        v += 1;
    }
    return qtd;
}


/* 
   Procedimento: recebe uma cadeia de bits [geralmente um vetor de caracteres, com 8 caracteres]
   e converte a cadeia de 8 bits para um número decimal, escrevendo um caractere no arquivo comprimido
   correpondente na Tabela ASCII "equivalente" ao número decimal.
   
   Ex: 
       Entrada - Binário.....: [00101001]  ---> Aqui eu tinha 8 bytes [8 * (char)] 
       Processo - Decimal....:   [41]      ---> Aqui eu tenho 4 bytes [Pois é um int ]
       Saída - ASCII.........:   ')'       ---> Aqui eu tenho 1 byte  [Pois é um char]
       
       # Escrevo o caractere ')' no arquivo.
       
       Por que fazer isso? 
       
       Se eu escrevesse a cadeia -->  [00101001] no ARQUIVO, esse arquivo teria +8 bytes, pois [1 char == 1 byte]. Porém, quando eu converto esses 8 bits
       para um número decimal (passo a ter 4 bytes). Logo em seguida gero um correspondente do decimal baseado na Tabela ASCII e salvo aquele caractere 
       no arquivo comprimido. Portanto, consegui reduzir 7 bytes realizando esse processo. Isso vai comprimindo pouco a pouco meu arquivo.
        
       Esse procedimento é muito importante no processo de comprimir e descomprimir os arquivos.        
       
       Referência: 
       https://www.ime.usp.br/~pf/algoritmos/aulas/bytes.html
      
 */ 
void converte_binario_para_decimal (char* v, char* arquivo_comprimido) {  
    
    // Dicionário de dados:
    FILE* arq;
    int fim = minha_strlen(v);
    int resto = minha_strlen(v) % 8;
    int n = minha_strlen(v) - resto;
    unsigned int soma, sinalizador = 0;
    //.....................
    
    if (!(arq = fopen(arquivo_comprimido, "ab"))) {
        Error("problema na hora de abrir o arquivo");
    }
     
    for (int i = 0; i < n; i++) { 
        soma = 0;
        for (int j = 7; j >= 0; j--) {
            if (v[i] == '1') soma = soma + 1 * pow(2,j);
            i++;
        }
        i--;
        fwrite(&soma, sizeof(char), 1, arq); // Escrevendo o caractere ASCII no arquivo .comprimido
        sinalizador = 1;         
    }
    
    if (sinalizador != 1) {
        for (int i = fim-1; i >= n; i--) {
            soma = 0;
            for (int j = 0; j < 8; j++) {
                if (v[i] == '1' && i >= n) soma = soma + 1 * pow(2,j);
                i--;  
            }
            fwrite(&soma, sizeof(char), 1, arq); // Escrevendo o caractere ASCII no arquivo .comprimido
        } 
    }
    fclose(arq);
}

/*
    Função: responsável por receber um número Decimal e converter esse número para uma representação Binária com 8 bits.
            No entanto, terá momentos em que determinado número não terá 8 bits, por exemplo, o número 7 em binário é 111,
            então será preciso completar esses bits que estão faltando. Ficando 00000111  <-- 8 bits.
            
            Referência: 
            https://www.ime.usp.br/~pf/algoritmos/aulas/bytes.html
            
*/
char* converte_decimal_para_binario (int valor, int qtd, int f, int r, char* copia) {
    
    // Dicionário de dados:
    int  resto, tam = 0, n, inicio, k;
    char binario[9] = {0};
    //.....................
    
    while (valor >= 1) {
         resto = valor % 2;
         if (resto == 0) binario[tam] = '0';
         else            binario[tam] = '1';
         
         tam += 1;
         valor = valor / 2;
    }
    
    if (qtd == f + 1) {
        n = r - tam;
        for (int i = 0; i < n; i++) {
            binario[tam] = '0';
            tam++;
        }
        binario[tam] = '\0';
    }
    else { 
        n = 8 - tam;
        for (int i = 0; i < n; i++) {
            binario[tam] = '0';
            tam++;
        }
        binario[tam] = '\0';
    }
    
    k = 0;
    inicio = strlen(binario) - 1;
   
    for (int i = inicio; i >= 0; i--) {
        copia[k] = binario[i];
        k++;
    }
    copia[k] = '\0';
    
    return copia;  
}


// Procedimento: responsável por percorrer uma fila e desalocar memória de cada Nó que compoem a Fila.
void free_fila (No_fila* aux) {
    // Dicionário de dados:
    No_fila* lixo;
    int tam = tam_fila;
    
    inicio_fila = NULL;
    fim_fila    = NULL;
    
    for (int i = 0; i < tam; i++) {
        lixo = aux;
        aux = aux -> prox;
        lixo -> prox = NULL;
        
        tam_fila--;
        free(lixo);
    }
}


// Procedimento: responsável por imprimir os valores que compoem a Fila.
void imprimir_fila () {
    No_fila* aux = inicio_fila;
    
    while (aux != NULL) {
        printf("%c, ",aux -> valor);
        aux = aux -> prox;
    }
}


/* 
    Procedimento: responsável por add Nó em uma Fila. Quando a Fila atinge um tamanho de 8 elementos (bits)
    seus valores são copiados para um vetor[0-7] e a Fila é desalocada da memória.
*/ 
void add_fila (char* binario, char* cadeia, int tam, char* arquivo_comprimido) {
     int i;
     
     for (i = 0; i < tam && tam_fila < 8; i++) {
        No_fila* novo = (No_fila*) malloc (sizeof(No_fila));
        novo -> prox = NULL;
        novo -> valor = binario[i];
     
        if (inicio_fila == NULL) {
            inicio_fila = novo;
            fim_fila = novo;              
        }
        else {
            fim_fila -> prox = novo;
            fim_fila = fim_fila -> prox;
        }
        tam_fila++;
     }
     
     if (tam_fila == 8) {
        No_fila* aux = inicio_fila;
        for (i = 0; i < 8; i++) {
            cadeia[i] = aux -> valor;
            aux = aux -> prox;
        }
        converte_binario_para_decimal(cadeia, arquivo_comprimido);
        free_fila(inicio_fila);
     }
}


/* 
    Função: responsável por percorrer a Árvore de Huffman, com o intuito de decodificar a cadeia de bits gerada
            pela Árvore de Huffman, para os seus respectivos caracteres.
            
            Ex: converte determinada cadeia de bits PARA o seu respectivo caractere.
*/
int decodificar_codigo(No* aux, char* c, char* letra, int* cont) {
    // Dicionário de dados:
    int sinalizador = 0;
    
    if (aux -> esq == NULL && aux -> dir == NULL) {
        *letra = aux -> c;
        return 1;
    }
    
    sinalizador = 0;

    if (aux -> esq != NULL && *c == '0') {
        *cont = *cont + 1;
        sinalizador = decodificar_codigo(aux -> esq, c + 1, letra, cont);
    }

    if (aux -> dir != NULL && *c == '1' && sinalizador == 0) {
        *cont = *cont + 1;
        sinalizador = decodificar_codigo(aux -> dir, c + 1, letra, cont);
    }
    return sinalizador;
}


// Procedimento: responsável por concatenar duas "Strings" que são passadas como parâmetro.
void minha_strcat(char* string1, char* string2, int* sinalizador) {
    // Dicionário de dados:
    int tam, i;
    
    if (*sinalizador == 0) {
        tam = 0;
        *sinalizador = 1;
    }
    else {
        tam = strlen(string1);
    }
    
    i = 0;
    while (string2[i] != '\0') {
        string1[tam] = string2[i];
        tam++;
        i++;
    }
    string1[tam] = '\0';
}


// Procedimento responsável por desalocar os Nós presente na Árvore de Huffman.
void desalocar_arvore(No* aux) {
    // Desalocando em Pós-Ordem
    if (aux -> esq == NULL) {
        desalocar_arvore(aux -> esq);
    }
    
    if (aux -> dir == NULL) {
        desalocar_arvore(aux -> dir);
    }
    
    free(aux);
}


/* 
   Procedimento: responsável por gerar a Tabela Código de Caractere, de cada caractere que estava presente
   no arquivo .txt
*/
void gerar_tabela_de_codigo(int* caracteres) {
    
    printf("\n...... TABELA DE CÓDIGO DE CARACTERE ......\n");
    for (int i = 0; i < 256; i++) {
        char codigo[150] = {0};
        if (caracteres[i] != 0) {
            gera_codigo(raiz, i, codigo, 0);
            printf("%c ---> %s\n", i, codigo);
        }
    }
}


/* 
    ABAIXO ESTÃO OS PROCEDIMENTOS GERAIS:
        # comprimir_arquivo   (...)
        # descomprimir_arquivo(...) 

*/


/*
    PROCEDIMENTO: recebe o 'nome' de um arquivo para comprimir como 1° argumento e como 2° 
                  argumento o 'nome' do arquivo comprimido. Após isso, realiza a compressão
                  desse arquivo, gerando assim um arquivo comprimido, isto é, com menos bytes.
*/
void comprimir_arquivo(char* arquivo_para_comprimir, char* arquivo_comprimido) {
    // Dicionário de dados:
    FILE* arq;  
    char *texto, *copia;
    int tamanho_inicial = 0, tamanho_da_cadeia = 0, tam_texto, resto;    
    int lista_freq_caracter[256] = {0};
    //.....................
    
    if (!(arq = fopen(arquivo_comprimido, "ab"))) {
        Error("problema na hora de abrir o arquivo");
    }
   
    // 1° - Vou ler o arquivo .txt e colocar seus caracteres em um vetor[...]:
    texto = pegar_caracteres_do_txt(arquivo_para_comprimir);
    
    
    // 2° - Vou contabilizar a ocorrência de cada caractere presente no vetor[...] e colocar no vetor lista_freq_caracter[0-255]:
    ocorrencia_caractere (texto, lista_freq_caracter);
    
    
    // 3° Vou criar minha LDE através do vetor que contém as frequências:
    criando_lde (lista_freq_caracter);
    
    
    // 4° - Vou montar a Árvore de Huffman:  
    raiz = criando_arvore_huffman ();
    
    
    // 5° - Vou imprimir conteúdo presente no arquivo a ser comprimido:
    printf("Conteúdo presente no arquivo: %s\n", texto);
    
    
    // 6° - Vou escrever cada frequência contido no vetor de frequencias no Cabeçalho do arquivo que será comprimido (importante para reconstruir a Árvore):
    fwrite(lista_freq_caracter, sizeof(int), 256, arq);
    
    
    // 7° - Vou obter o tamanho da Cadeia de bits gerada pela Árvore de Huffman correspondente ao texto do arquivo original:
    printf("......... CADEIA DE BITS GERADO PELA ÁRVORE DE HUFFMAN .........\n");
    for (int i = 0; i < minha_strlen(texto); i++) {
        char codificacao_letra[150] = {0};
        gera_codigo(raiz, texto[i], codificacao_letra, tamanho_inicial);
        
        printf("%s",codificacao_letra);
        
        tamanho_da_cadeia = tamanho_da_cadeia + strlen(codificacao_letra);  
    }
    printf("\n");
    
    gerar_tabela_de_codigo(lista_freq_caracter);

    // 9° - Vou escrever no cabeçalho do arquivo um número decimal que corresponde o tamanho da cadeia de bits gerada pela Árvore de Huffman 
    fwrite(&tamanho_da_cadeia, sizeof(int), 1, arq);    

    
    // 10° - Vou fechar o arquivo comprimido. Porém, só escrevemos no arquivo até agora [Árvore de Huffman e Tamanho da Cadeia de bits gerado para o tetxo]
    // Pontanto, ainda falta escrever a codificação gerada pela Árvore de Huffman no arquivo comprimido. 
    fclose(arq); 
    
    
    /*
        10° -
        
        # Em resumo: o trecho abaixo recebe uma cadeia de bits [gerada pela função gera_codigo(...)] essa cadeia de bits vai possuir 
          TAMANHO VARIÁVEL, Ex: 0011 ou 00011101 ou 00011100011 [...]. Então a partir dessa cadeia recebida, Eu vou converter ela para
          um número Decimal. Porém, esse número decimal deve ser formado SEMPRE por 8 bits. 
        
           _ _ _ _ _ _ _ _  ---> 8 bits
        
        # Logo, se eu receber uma cadeia composta apenas por 5 bits, Ex: 01101, preciso ESPERAR outra cadeia chegar para pegar os
          outros 3 bits que estão faltando, para assim completar os 8 bits que preciso.
        
        # Suponha que a cadeia que chegou foi: 110101
        
        # Concateno os a Antiga cadeia --> [01101] + [110] <--- 3 primeiros bits da Nova cadeia. Portano, completou 8 bits que precisava
        
        # Converto esses 8 bits para um número Decimal, em seguida para um caractere ASCII e por fim escrevo esse caractere no Arquivo.
           
        # Todo esse processo é feito Utilizando: 
            * FILAS....: utilizadas para armazenar os 8 bits, cada bit em cada Nó. Obs: A fila é desalocada quando atinge tamanho = 8.
            * Vetores..: para não perder os bits restantes de uma determinada cadeia. Isso porque às vezes, vão 
                         chegar cadeias da seguinte forma: 1011 --> 4 bits, então preciso apenas de +4 bits para 
                         completar 8 bits, no entanto, a próxima cadeia que chegou possui 1011101 --> 7 bits e 
                         Eu não posso perder os bits restantes. Portanto preciso add em algum lugar para não
                         perder esses valores. 
    */
    resto = tamanho_da_cadeia % 8;
    tam_texto = strlen(texto);
      
    int i, z;    
    for (z = 0; z < tam_texto; z++) {
       // Dicionário de dados:
       char codigo[150] = {0}; 
       char copia[20] = {0};
       char restante[20] = {0};
       char cadeia[9] = {0};
       //.....................   
       
       gera_codigo(raiz, texto[z], codigo, tamanho_inicial);
       
       if (strlen(codigo) > 8 - tam_fila) {
            int i;
            for (i = 0; i < 8-tam_fila; i++) {
                copia[i] = codigo[i];
            }
            copia[i] = '\0';
            
            int k = 0;
            for (i = 8-tam_fila; i < strlen(codigo); i++) {
                restante[k] = codigo[i];
                k++;
            }
            restante[k] = '\0';
            
            add_fila(copia, cadeia, strlen(copia), arquivo_comprimido);
            
            add_fila(restante, cadeia, strlen(restante), arquivo_comprimido); 
       }
       else {
            add_fila(codigo, cadeia, strlen(codigo), arquivo_comprimido);
       }
       
       if (z == tam_texto - 1) {
            char* cadeia = (char*) calloc (resto+1, sizeof(char));
            No_fila* aux = inicio_fila;
            for (int i = 0; i < resto; i++) {
                cadeia[i] = aux -> valor;
                aux = aux -> prox;
            }
            
            converte_binario_para_decimal(cadeia, arquivo_comprimido);
            
            free_fila(inicio_fila);
            free(cadeia);
       }  
    }
    
    free(texto);
    desalocar_arvore(raiz);
}


/*
    PROCEDIMENTO: recebe o 'nome' do arquivo comprimido como 1° argumento e 'nome' do arquivo 
                  descomprimido como 2° argumento. Depois, descomprime o arquivo comprimido, 
                  criando em seguida um novo arquivo descomprimido com conteúdo igual ao arquivo
                  que foi comprimido.
    
*/
void descomprimir_arquivo (char* arquivo_comprimido, char* arquivo_descomprimido) {
    
    // Dicionário de dados:
    FILE* arq, *arq2;
    int i = 0, c, qtd = 0, resto, cont = 0, tam_bits[4], tamanho = 0, sinalizador = 0, inteiro;
    int lista_freq_caracter[256] = {0};
    char letra, *copia; 
    unsigned char *v;
    //.....................
    
    arq = fopen(arquivo_comprimido, "rb");
    if (arq == NULL) {
        Error("problema na hora de abrir o arquivo");    
    }
    
    
    /* 
        1° - Vou ler a lista de frequências que está salva no cabeçalho do meu arquivo comprimido.
        Como são 256 números inteiros, preciso ler 256 * 4 bytes = 1024 bytes.
    */
    fread(lista_freq_caracter, sizeof(int), 256, arq);
    
       
    /* 
       2° - Vou utilizar fseek, que é usada para posicionar o indicador de posição em local específico do arquivo.
       Nesse caso vou avançar 1024 bytes, pois 256 * 4(int) = 1024 [Espaço ocupado pelo cabeçalho].
    */    
    fseek(arq, 1024, SEEK_SET);
    
     
    /* 
        3° - Vou ler o número(int) que representa o tamanho da cadeia de bits Gerada pela Árvore de Huffman:
    */
    fread(&tamanho, sizeof(int), 1, arq);
    
    
    /* 
        4° - Vou avançar [1024 + 4 bytes] = 1028 bytes, começando do começo do arquivo comprimido 
        [Este é o espaço em bytes ocupado pelas frequências e pelo tamanho da cadeia de bits]:
    */
    fseek(arq, 1028, SEEK_SET); 
    
    
    /* 
        5° - Vou calcular a quantidade de bytes que a cadeia de bits gerada pela Árvore de Huffman ocupa:
    */
    int inicio = ftell(arq);
    fseek(arq, 0, SEEK_END);
    int fim = ftell(arq);
    
    int result = fim - inicio;
    
    fseek(arq, 1028, SEEK_SET);
    
    
    /* 
       6° - Vou alocar memória suficiente para a cadeia de bits (que foi gerada pela Árvore) mas que está gravada no arquivo
       em forma de caractere (char - 1 byte).
    */
    v = (char*) malloc (result * sizeof(char) + 1);
    
    
    /* 
       7° - Vou ler e armazenar no vetor[...] alocado dinamicamente a quantidade de bytes que sobraram no arquivo, isto é, 
       os caracteres que representam toda a cadeia de bits (essa cadeia foi gerada pela Árvore e armazenada no arquivo):
    */
    fread(v, sizeof(char), result, arq);
    fclose(arq);
    
    
    /* 
       8° PROCESSO DE "TRADUÇÃO" --> Explicado na documantação:     
    */
    resto = tamanho % 8;
    inteiro = tamanho / 8;
       
    char* cadeia_de_bits; // vetor de caracteres que vai armazenar a cadeia de bits gerada pela Árvore de Huffman, que foi armazenada no arquivo comprimido:
    if (resto == 0) {
        cadeia_de_bits = (char*) malloc (sizeof(char) * result * 8 + 1);
    }
    else {
        cadeia_de_bits = (char*) malloc (sizeof(char) * (inteiro * 8 + resto + 1));  
    }
    
    printf("\n......... CADEIA DE BITS LIDAS DO ARQUIVO .........\n\n");
    copia = (char*) malloc (9 * sizeof(char));  
    for (int i = 0; i < result; i++) {
        copia = converte_decimal_para_binario (v[i], result, i, resto, copia);
        printf("%s",copia);
        minha_strcat(cadeia_de_bits, copia, &sinalizador);
    }
    printf("\n");
    free(v);
    free(copia);
    
    arq2 = fopen(arquivo_descomprimido, "wt");
    if (arq2 == NULL) {
        Error("problema na hora de abrir o arquivo");    
    }
    
    // Reconstruindo Árvore de Huffman, para realizar a descompressão:
    criando_lde(lista_freq_caracter);
    raiz = criando_arvore_huffman ();
        
    printf("\n\nTexto gerado da descompressão: \n\n");
    for (i = 0; cont != strlen(cadeia_de_bits); i++) {
        decodificar_codigo(raiz, cadeia_de_bits + cont, &letra, &cont);
        printf("%c",letra);
        fprintf(arq2,"%c",letra); // Escrevendo a decodificação no arquivo descomprimido.
    }
    printf("\n");
    
    fclose(arq2);
    free(cadeia_de_bits);
    desalocar_arvore(raiz);
}


// Procedimento: responsável por exibir o modo de uso do programa.
void como_utilizar () {
    puts("\nFormato básico: ./executavel [opcao] [arquivo_1] [arquivo_2]");
    puts("\nOpções disponíveis:");
    puts("c para comprimir o arquivo.");
    puts("d para descomprimir o arquivo.\n");
    puts("Exemplo, para comprimir.....:$  ./huffman c arquivo.txt comprimido.bin");
    puts("Exemplo, para descomprimir..:$  ./huffman d comprimido.bin descomprimido.txt");
}


// Função: reponsável por chamar as duas funções principais, i.e, comprimir_arquivo (...) e descomprimir_arquivo (...)
int main (int argc, char* argv[]) {
       
   if (argc < 4) {
        como_utilizar();
        Error("Está faltando parâmetros");
   }
   
   if (*argv[1] == 'c') {
        comprimir_arquivo(argv[2], argv[3]);
   } 
   else if (*argv[1] == 'd') {
        descomprimir_arquivo(argv[2], argv[3]);
   }
   else {
        como_utilizar();
   }
   return 0;     
}
