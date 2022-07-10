#include <stdio.h>

// Criando estrutura do tipo Pessoa com os atributos:
// peso, idade, altura:

struct Pessoa {
  float peso;
  int idade;
  float altura;
};

// Função principal:
int main (void) {
  
  struct Pessoa P1;  // variável P1 do tipo Pessoa
  struct Pessoa povo[10]; // vetor do tipo Pessoa de 10 posições

  // Atribuição de valores (Pessoa):  
  P1.peso = 78.9;
  P1.idade = 45;
  P1.altura = 1.85;
  // Atribuição de dados (povo[10]):
  povo[0].peso = 45.5;
  povo[0].idade = 10;
  povo[0].altura = 1.1;

  povo[5].peso = 65.5;
  povo[5].idade = 45;
  povo[5].altura = 1.5;

  // Saída de dados (Pessoa):
  printf("P1.peso = %.2f\nP1.idade = %d\nP1.altura = %.2f \n",P1.peso
                                                             ,P1.idade
                                                             ,P1.altura);
  putchar('\n');
  // Saída de dados (povo[0] e povo[5]):
  printf("povo[0].peso = %.2f\npovo[0].idade = %d\npovo[0].altura = %.2f\n",povo[0].peso
                                                                         ,povo[0].idade
                                                                         ,povo[0].altura);

  
    return 0;
}
