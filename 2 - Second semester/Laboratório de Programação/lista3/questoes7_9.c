#include <stdio.h>
#include <stdlib.h>
#define TAM 50

void menu () 
{
    puts("[7] questão 7");
    puts("[8] questão 8");
    puts("[9] questão 9");
    puts("[0] sair");
}


float *ordenado (float x[], float y[], int n)
{
    int k = 0;
    float *z, menor;
    int pos_menor;
    
    z = (float*) malloc (sizeof(float) * (2*n));

    for (int i = 0; i < 2*n; i++) {
        if (i < n) {
            z[i] = x[i];
        }
        else {
            z[i] = y[k];
            k++;
        }
    }

    for (int i = 0; i < 2*n; i++) {
        menor = z[i];
        pos_menor = i;
        for (int j = i; j < 2*n; j++) {
            if (z[j] < menor) {
                menor = z[j];
                pos_menor = j;
            }
        }
        z[pos_menor] = z[i];
        z[i] = menor;
    }
    return z; 
}

void questao7 ()
{
    int n;
    float x[TAM], y[TAM], *z;

    printf("Entre com um número 'n': ");
    scanf("%d",&n);
    
    printf("vetor x: \n");    
    for (int i = 0; i < n; i++) {
        printf("x[%d] = ",i);
        scanf("%f",&x[i]);
    }

    printf("\nvetor y: \n");    
    for (int i = 0; i < n; i++) {
        printf("y[%d] = ",i);
        scanf("%f",&y[i]);
    }

    z = ordenado (x, y, n);
    
    for (int i = 0; i < 2*n; i++) {
        printf("%f ",z[i]);
    } 
    free(z);
}

int alternante (int v[], int n)
{   
    int k = 0, im = 0, par = 0, op1, op2;

    // par
    if (v[0] % 2 == 0) {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 != 0) break;
            k++;
        }
    }
    // impar
    else {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) break;
            k++;
        }
    }
    
    //if (k == 1) {
    //    for (int i = 0; i < n; i++) {
    //        op1 = v[i] % 2 == 0;
    //        op2 = v[i+1] % 2 == 0;
    //        if (op1 == op2) return 0;
    //        
    ///        op1 = v[i] % 2 != 0;
    //        op2 = v[i+1] %2 != 0;

      //      if (op1 == op2) return 0;
      //  }
       // return 1;
   /// }
    
    
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < k; j++) {
            if (v[i + j] % 2 == 0) par++;
            else                   im++;
            
        }

        if (k != par && k != im) return 0;

        im = 0;
        par = 0;
    }
    return 1;
}

void questao9 ()
{
    int n, v[TAM];
    
    printf("Entre com um número n, onde n >= 1: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
    }
    
    printf("retorno = %d\n",alternante (v,n));
}

int main (void) {
    
    int op;

    while (1) {
        menu ();
        printf("Escolha uma questão: ");
        scanf("%d",&op);

        if (op == 0) break;

        switch (op) {
            case 7: {
                questao7 ();
            } break;

            case 8: {
                //questao8 ();
            } break;

            case 9: {
                questao9 ();    
            } break;

            default: {
                printf("Opção inválida !!\n");         
            }
        }
    }
    return 0;
}
