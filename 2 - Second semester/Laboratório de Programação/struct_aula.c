#include <stdio.h>
#include <math.h>
#include <string.h>

// Estrututra do tipo Ponto:
struct ponto {
    float x, y;
};
typedef struct ponto Ponto;


struct circulo{
    Ponto centro;
    float raio;
};
typedef struct circulo Circulo;

// P1 armazena o endereço passado como argumento. Referenciando assim, para P1
// P2 tbm armazena o endereço passado com argumento. Referenciando assim, para P2

float distancia (Ponto *P1, Ponto *P2) {
    return sqrt(pow(P2->x - P1->x, 2) + pow(P2->y - P1->y,2));
}

int ponto_dentro_de_circulo (Circulo *c, Ponto *p) {
    float d = sqrt(pow(p->x - c->centro.x, 2) + pow(p->y - c->centro.y, 2));
    if (d < c->raio) return 1;
    return 0;    
}

int interno (Circulo *c, Ponto *p) {
    return distancia(&c->centro, p) < c->raio;
}

int main (void) {
    Ponto P1, P2; // P1 e P2 são do tipo Ponto 
    Circulo c; // c é do tipo Circulo
    
    P1.x = 0; // Acessando o atributo x, para colocar o valor 0
    P1.y = 0; // Acessando o atributo y, para colocar o valor 0

    P2.x = 4; // Idem
    P2.y = 3; // Idem
    
    c.centro.x = 0;
    c.centro.y = 0;
    c.raio = 2;

    printf("P1 = (%f,%f)\n",P1.x, P1.y);
    printf("P2 = (%f,%f)\n",P2.x, P2.y);
    
    printf("dist = %f\n",distancia(&P1, &P2));
    
    printf("centro (%f,%f)\n",c.centro.x, c.centro.y);
    printf("raio = %f\n",c.raio);
    printf("\n%d\n",ponto_dentro_de_circulo(&c,&P2));
    

    printf("P1 É interno a c? %d\n",interno(&c, &P1));
    printf("P2 É interno a c? %d\n",interno(&c, &P2));
    return 0;
}
