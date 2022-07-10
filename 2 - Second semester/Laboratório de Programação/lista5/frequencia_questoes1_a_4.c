// Discente: Paulo Henrique Diniz de Lima Alencar.
#include <stdio.h>
#include <stdlib.h>

// Questão1:.................................................................................................
// Função: recebe uma string e um caractere, retornando o número de caracteres iguais ao caractere informado.
int conta_caracteres (char* string, char caractere) {
    int qtd=0;

    while (*string != '\0') {
        if (caractere == *string) 
            qtd++;
        string += 1;
    }
    return qtd;
}


// Questão2:......................................................................................................................
// Procedimento: recebe um vetor de strings e um inteiro que é o tamanho do vetor. Imprime em ordem alfabética as strings do vetor.
void imprime_string_em_ordem_alfabetica (char** vetor, int t) { 
    
    printf("Antes: \n");
    for (int i = 0; i < t; i++) {
        for (int j = 0; vetor[i][j] != '\0' ; j++) {
            printf("%c ",vetor[i][j]);
        }
        printf("\n");
    }

    
    char menor, *aux_end;
    // Realiza uma ordenação, fazendo com que os ponteiros com índices menores aponte para strings que possuem a primeira letra
    
    // com menor valor na tabela ASCII.
    for (int i = 0; i < t; i++) {
        aux_end = &vetor[i][0];
        menor = vetor[i][0];
        for (int j = i; j < t; j++) {
            if (vetor[j][0] < menor) {     
                menor = vetor[j][0];
                vetor[i] = &vetor[j][0];
                vetor[j] = aux_end;
            }
        }
    }

    printf("\nDepois:\n");

    for (int i = 0; i < t; i++) {
        for (int j = 0; vetor[i][j] != '\0' ; j++) {
            printf("%c ",vetor[i][j]);
        }
        printf("\n");
    }
}

// Função: retorna a quantidade de caractere de uma string [Utilizada na questão2]
int get_tamanho (char* string) {
    int qtd=0;
    while (*string != '\0') {
        string += 1;
        qtd++;
    }
    return qtd;
}


// Procedimento: realiza a cópia de determinada string para um vetor de caracteres. [Utilizada na questão2]
void copia (char* destino, char* origem) {
    int tamanho = get_tamanho(origem);
    int i;

    for (i = 0; i < tamanho; i++) {
        destino[i] = origem[i];
    }
    destino[i] = '\0';
}


// Questão3:...................................................................................
// Função: recebe duas strings s1 e s2 e retorna a quantidade de vezes que s2 é segmento de s1.
int qtd_vezes_e_segmento (char* s1, char* s2) {
    
    int i=0, k=0, j, qtd=0;
    
    while (s1[i] != '\0') {
        j = 0;
        i = k;
        while (s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0') {
            j++;
            i++;
        }
        k++;
        if (j == get_tamanho(s2)) qtd++;
    }
    return qtd;
}

// Questão4:.....................................................................................
// Procedimento: recebe uma string e troca as letras minúsculas por suas maiúscula correspondente.
void deixa_maiuscula (char* string) {
    while (*string != '\0') {
        if (*string != ' ' && *string >= 97 && *string <= 122) *string = *string - 32;
        string += 1;
    }
}

int main (void) {
    // Questão1:...................................
    char string[30], c, buffer;
    printf("Questão 1:\n");
    printf("Entre com uma string: ") ;
    scanf("%30[^\n]",string);
    scanf("%c",&buffer);
      
    printf("Entre com determinado caractere: ");
    scanf("%c",&c);  
    scanf("%c",&buffer);
    
    printf("A string \"%s\" possui o caractere '%c' %dx\n",string, c, conta_caracteres(string,c)); 
    //.............................................
    

    // Questão2:...................................
    char** vetor;
    vetor = (char**) malloc(3*sizeof(char*));
    
    char palavra[30];
    int tamanho;

    printf("\nQuestão 2:\n");
    for (int i = 0; i < 3; i++) { 
        printf("Digite a %d* palavra: ",i+1);
        scanf("%30[^\n]",palavra);
        scanf("%c",&buffer);
        tamanho = get_tamanho(palavra);    
        vetor[i] = (char*) malloc ((tamanho+1) * sizeof(char));
        copia(vetor[i], palavra);
    }

    imprime_string_em_ordem_alfabetica(vetor, 3);
    //.............................................
    
    // Questão3:...................................
    char s1[40],s2[25];
    printf("\nQuestão 3:\n");
    printf("Entre com s1: ");
    scanf("%40[^\n]",s1);
    scanf("%c",&buffer);
    printf("Agora entre com s2: ");
    scanf("%25[^\n]",s2);
    scanf("%c",&buffer);
    printf("É segmento: %dx\n",qtd_vezes_e_segmento (s1, s2));
    //.............................................
    

    // Questão4:...................................
    char string_[30];
    printf("\nQuestão4:\n");
    printf("Entre com um string, para deixa-lá maiuscula: ");
    scanf("%30[^\n]",string_);
    deixa_maiuscula (string_);
    printf("Resultado: %s\n",string_);
    //.............................................
    return 0;
}
