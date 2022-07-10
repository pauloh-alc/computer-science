#include <stdio.h>

void menu ()
{
    puts("[4] questão 4. ");
    puts("[5] questão 5. ");
    puts("[0] sair...... ");
}

int qtd_digitos (int n)
{   
    int qtd = 0;
    
    while (n != 0) {
        n = n / 10;
        qtd++;        
    }
    return qtd;
}

int potencia (int base, int expoente) 
{
    int pot = 1;

    for (int i = 0; i < expoente; i++) {
        pot = pot * base;            
    }

    return pot;
}

int questao4 (int n) 
{
    
    if (n >= 0 && n <= 9) return 1;
    
    int divisao = potencia(10, qtd_digitos(n) - 1);
    
    int aux = n, d = 1, inverso = 0;
    
    while (aux != 0) {
        inverso = inverso + aux % 10 * (divisao / d);
        d = d * 10;  
        aux = aux / 10;
    }
    
    if (inverso == n) return 1;
    return 0;
}

int questao5 (int b) 
{   
    int pot = 1, soma = 0;
    while (1) {
        soma = soma + (b % 10 * pot); 
        pot = pot * 2;
        b = b / 10;
        if (b == 0) break;
    }
    return soma;
}

int main (void) {
    int op;

    while (1) {
        menu ();
        printf("Entre com um opção: ");
        scanf("%d",&op);

        if (op == 0) break;

        switch (op) {
            
            case 4: {
                printf("%d\n",questao4 (2552));    
            } break;

            case 5: {
                printf("%d\n",questao5 (101));
            } break;
            
            default: {
                printf("Opção inválida !!\n");         
            } break;
        }
    }

    return 0;
}
