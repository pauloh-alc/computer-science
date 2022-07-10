#include <stdio.h>
#define TAM 30

void menu ()
{
    puts("[4] questão 4");
    puts("[5] questão 5");
    puts("[6] questão 6");
    puts("[0] sair");
}

void menor_e_maior (int v[], int x) 
{   
    int menor = v[0];
    int maior = v[0];
    for (int i = 1; i < x; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("menor: %d\n",menor);
    printf("maior: %d\n",maior);
}

void questao4 () {
    int vetor[TAM], n; 
    
    printf("Entre com um número 'n': ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        printf("vetor[%d] = ", i);
        scanf("%d",&vetor[i]);
    }

    menor_e_maior (vetor, n);
}


int produto_escalar (int x[], int y[], int n) 
{
    int produto = 0;
    
    for (int i = 0; i < n; i++) {
         produto = produto + x[i] * y[i];
    } 
    
    return produto;
} 


void questao5 () 
{   
    int x[TAM], y[TAM], n;

    printf("Entre com o valor de 'n': ");
    scanf("%d",&n);
    
    printf("vetor x: \n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }

    printf("\nvetor y: \n");
    for (int i = 0; i < n; i++) {
        printf("y[%d] = ",i);
        scanf("%d",&y[i]);
    }
    
    printf("produto escalar = %d \n", produto_escalar(x,y,n));    
}


void vezes_elemento_aparece (float x[], int n)
{
    int vezes, k = 0, sinalizador = 0;
    
    float aux[TAM];

    for (int i = 0; i < n; i++) {
        vezes = 0;
        sinalizador = 0;
        for (int j = 0; j < n; j++) {
            if (x[i] == x[j]) {
                vezes++;
            }
        }

        for (int p = 0; p < k; p++) {
            if (x[i] == aux[p]) {
                sinalizador = 1;
                break;
            }
        }

        if (sinalizador != 1) printf("%.2f ocorre %dx\n",x[i], vezes);

        aux[k] = x[i];
        k++;
    }
}

void questao6 ()
{   
    int n;
    float x[TAM];

    printf("Entre com um número 'n': ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        printf("x[%d] = ",i);
        scanf("%f",&x[i]);
    }
    
    vezes_elemento_aparece (x, n);
}

int main (void) {
    int op;
    while (1) {
        menu ();
        printf("Escolha uma opção: ");
        scanf("%d",&op);
        
        if (op == 0) break;
        
        switch (op) {
            case 4:{
                questao4 ();
            } break;

            case 5: {
                questao5 ();        
            } break;

            case 6: {
                questao6 ();
            } break;

            default:{
                printf("Opção inválida !! \n");
            }

        }   
    }
    return 0;
}
