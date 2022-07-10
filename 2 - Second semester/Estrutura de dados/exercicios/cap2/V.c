// Exercício V - resolução 
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *prox;
} No;

No *inicio = NULL;
int tam = 0;

No *i; // código adicional

void erros (char *msg)
{
	fprintf(stderr,"Errro: %s !!\n",msg);
	exit(1);
}


void adicionar (int valor, int pos)
{
	if (pos >= 0 && pos <= tam) {
		No *novo = (No*) malloc (sizeof(No));
		novo -> valor = valor;
		novo -> prox = NULL;
		
		
		if (inicio == NULL) {
			inicio = novo;
			i = inicio; // código adicional
		}
		else if (pos == 0) {
			novo -> prox = inicio;
			inicio = novo;
		}
		else if (pos == tam) {
			printf("fim da lista\n");
			i -> prox = novo;// coódigo adicional
			i = novo;// código adicional
		}
		else {
			No *Aux; 
			Aux = inicio; 
			for (int i = 0; i < pos - 1; i++) 
				Aux = Aux -> prox;
			novo -> prox = Aux -> prox;
			Aux -> prox = novo;
		}
	tam++;	
	}
	else {
		erros ("posicao invalida");
	}	
}


void exibir ()
{
	No *aux;
	for (aux = inicio; aux != NULL; aux = aux -> prox) {
		printf("%d\n",aux -> valor);
	}
}

int main (void) {
	adicionar (10, 0);
	adicionar (20, 1);
	adicionar (30, 2);
	adicionar (80, 0);
	adicionar (90, 4);
	
	exibir();
	
	return 0;
}
