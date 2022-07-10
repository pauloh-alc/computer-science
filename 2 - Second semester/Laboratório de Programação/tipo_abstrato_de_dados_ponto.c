#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} tPonto;

tPonto inicializacao_na_origem() {
    tPonto p;
    
    p.x = 0;
    p.y = 0;

    return p;
}

tPonto inicializacao_do_usuario () {
    tPonto p;

    scanf("%d,%d",&p.x, &p.y);

    return p;
}

void apresentacao_do_ponto (tPonto p) {
    printf("(%d, %d)\n",p.x, p.y);
}

tPonto alteracao_abscissa (tPonto p, int x) {
    p.x = x;

    return p;
}

tPonto alteracao_ordenada (tPonto p, int y) {
    p.y = y;

    return p;
}

int obtencao_abscissa (tPonto p) {
    return p.x;
}

int obtencao_ordenada (tPonto p) {
    return p.y;
}

tPonto movimentacao_do_ponto (tPonto p, int x, int y) {
    p.x = p.x + x;
    p.y = p.y + y;

    return p;
}

int quadrante_do_ponto (tPonto p) {
    // origem (0,0);
    if (p.x == 0 && p.y == 0) return 0;
    // abscissa;
    else if (p.x == 0 && p.y != 0) return -1;
    // ordenada; 
    else if (p.x != 0 && p.y == 0) return -2;
    else if (p.x > 0 && p.y > 0) return 1; // 1 Q
    else if (p.x < 0 && p.y > 0) return 2; // 2 Q
    else if (p.x < 0 && p.y < 0) return 3; // 3 Q
    return                       return 4; // 4 Q
}    
int pot (int base, int exp) {
    int pot = 1;
    
    for (int i = 0; i < exp; i++)  
        pot = pot * base;
    
    return pot;
}

int distancia_entre_dois_pontos (tPonto p1, tPonto p2) {    
    return sqrt(pot(p2.x - p1.x, 2) + pot(p2.y - p1.y, 2)); 
}

int main (void) {
    tPonto ponto;

    ponto = inicializacao_na_origem();
    apresentacao_do_ponto(ponto);
    
    tPonto ponto2;

    ponto2 = inicializacao_do_usuario();
    apresentacao_do_ponto(ponto2);
    
    ponto = alteracao_abscissa(ponto, 8);
    apresentacao_do_ponto(ponto);
    
    ponto = alteracao_ordenada(ponto, 7);
    apresentacao_do_ponto(ponto);
    
    int retorno_x = obtencao_abscissa(ponto);
    printf("abscisssa: %d\n",retorno_x);
    
    ponto = movimentacao_do_ponto(ponto, 100, 100);
    apresentacao_do_ponto(ponto);
    
    tPonto p1, p2;
    p1.x = 0;
    p1.y = 0;
    p2.x = 4;
    p2.y = 3;

    int dist = distancia_entre_dois_pontos (p1, p2);

    printf("distancia entre p1 e p2: %d\n",dist);
    return 0;
}
