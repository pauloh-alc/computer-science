// Discente: Paulo Henrique Diniz de Lima Alencar
// Matrícula: 494837
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *prox;
} No;

No *inicio = NULL;
int tam = 0;

void erros (char *msg)
{
	fprintf(stderr,"Erro: %s !!\n",msg);
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
		}
		else if (pos == 0) {
			novo -> prox = inicio;
			inicio = novo;
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

int questao2 ()
{
	No *aux;
	int soma = 0;
	for (aux = inicio; aux != NULL; aux = aux -> prox) {
		if (aux -> valor % 2 == 0) {
			soma = soma + aux -> valor;
		}
	}
	return soma*soma;
}

int main (void) {
	adicionar (5, 0);
	adicionar (2, 1);
	adicionar (4, 2);
	adicionar (2, 3);
		
	exibir();
	
	int resultado = questao2();
	printf("A soma dos pares positivos da lista, elevado ao quadrado é: %d\n",resultado);
	return 0;
}
