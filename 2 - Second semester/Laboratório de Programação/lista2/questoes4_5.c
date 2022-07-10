// Discente: Paulo Henrique Diniz de Lima Alencar.
// Questões 4 e 5
// Matrícula: 494837
#include <stdio.h>


// Procedimento: exibe as questões disponíveis.
void menu_questoes ()
{
    puts("\n.... Questões....\n");
    puts("\n[4] questão 4");
    puts("[5] questão 5");
    puts("[0] sair");
}


// Função: retorna a quantidade de dígitos de um derterminado número. 
int qtd_de_digitos (int n)
{   
    int qtd = 0;

    if (n == 0) return 1;
    
    while (n != 0) {
        n = n / 10;
        qtd ++;
    }
    return qtd;
}


// Função: calcula a potência de um determinado número.
int potencia (int base, int exp) 
{
    int i, pot = 1;

    for (i = 0; i < exp; i++) {
        pot = pot * base;
    }
    return pot;
}


// Função: retorna a soma dos dígitos de determinado número.
int soma (int n) 
{   
    int resto, soma = 0;
    
    while (n != 0) {
        resto = n % 10;
        n = n / 10; 
        soma = soma + resto;   
    }
    return soma;
}


// Função: verifica se determinado número é formado apenas por um único digito. Ex: 222 ou 555 ou 88888
int mesmos_digitos (int numero)
{
    int resto, aux;

    aux = numero % 10;
    while (numero != 0) { 
        numero = numero / 10;
        resto = numero % 10; 
 
        if (numero == 0) break;    
       
        if (aux != resto) return -1;
    }
    return 1;
}


// Função: verifica se determinado número é palíndromo. Ex: 123321 ou 147741 ou 252 ou 2223222
int palindromo (int n)
{
    int qtd, resto, igual;

    qtd = qtd_de_digitos (n);
    
    if (qtd % 2 == 0) {
        resto = n % potencia (10, qtd/2);
        n = n / potencia (10, qtd/2);
        
        igual = mesmos_digitos (resto);
        
        if (igual == 1 && soma(n) == soma(resto)) return 1;
        if (soma(resto) == soma(n) && resto != n) return 1;
        else                                      return 0;
    }
    else { 
        resto = n % potencia (10, qtd/2);
        n = n / potencia (10, qtd/2); 
        n = n / 10;
         
        igual = mesmos_digitos (resto);
        
        if (igual == 1 && soma(resto) == soma(n)) return 1;
        if (soma(resto) == soma(n) && resto != n) return 1;
        else                                      return 0; 
    }
}


// Função: recebe um inteiro na base binária e retorna o valor desse binário para decimal.
int binario_para_decimal (int n) 
{   
    int resto, soma = 0, pot = 1;
    
    if (n == 0) return 0;

    while (n != 0) {
        resto = n % 10;
        n = n / 10;

        soma = soma + (resto * pot); 
        pot = pot * 2;
    }
    return soma;
}


// Função: principal.
int main (void) {
    int op;
    
    while (1) {
        menu_questoes ();
        printf("Escolha uma questão: ");
        scanf("%d",&op);
        __fpurge(stdin);
        
        if (op == 0) break;

        switch (op) {
            case 4: {
                int numero;
                printf("Entre com um numero: ");
                scanf("%d",&numero);
                
                printf("Retorno: %d \n", palindromo (numero));    
            } break;

            case 5: {
                int numero;
                printf("Entre com um número binário: ");
                scanf("%d",&numero);

                printf("Decimal: %d \n", binario_para_decimal (numero));
            } break;

            default: {
                printf("Opção digitada inválida !!\n");         
            } break;
        }
    }
    return 0;
}
