#include <stdio.h>

// Resolução do item a)
void a (int l[][4], int n, int k) {
    int chegam=0, saem=0;
    for (int i = 0; i < n; i++) {
        if (l[i][k] == 1 && i != k) chegam++; 
        if (l[k][i] == 1 && i != k) saem++;
    } 
    
    printf("chegam = %d\nsaem = %d\n",chegam,saem);
}


// Resolução do item b)
int b (int l[][4], int n) {
    int chegam=0, maior=0, cidade;
    
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (l[i][j] == 1 && j != i) chegam++;
        }
        if (chegam > maior) {
            cidade = j;
            maior = chegam;
        }
        chegam = 0;
    }
    return cidade;
}


// Resolução do item c)
int c (int l[][4], int n, int k) {
    int sentinela = 0;
    for (int i = 0; i < n; i++) {
        if (l[k][i] == 1 && i != k) {
            sentinela = 1;
            if (l[i][k] != 1) return 0;
        }
    }
    if (sentinela == 0) return 0;
    return 1;
}


// Resolução do item d)
int d (int l[][4], int n) {
    int chegam=0, saem=0, isoladas=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (l[i][j] == 1 && i != j) saem++;
            if (l[j][i] == 1 && i != j) chegam++;
        }
        if (saem == 0 && chegam == 0) isoladas++;
        saem=0;
        chegam=0;
    }
    return isoladas;
}


// Resolução do item e)
int e (int l[][4], int n) {
    int qtd=0, saem=0;
    for (int i = 0; i < n; i++) {
        saem = 0;
        for (int j = 0; j < n; j++) {
            if (l[i][j] == 1 && i != j) saem++;
        }
        if (saem == 0) qtd++;
    }
    return qtd;
}


// Resolução do item f)
int f (int l[][4], int n) {
    int qtd=0, chegam=0;
    for (int i = 0; i < n; i++) {
        chegam=0;
        for (int j = 0; j < n; j++) {
            if (l[j][i] == 1 && i != j) {
                j=n;
                chegam++;
            }
        }
        if (chegam == 0) qtd++;
    }
    return qtd;
}


// Resolução do item g)
int g (int l[][4], int *cam, int m) {
    
    for (int i = 0; i < m-1; i++) {
        if (l[cam[i]][cam[i+1]] != 1) return 0;
    }
    return 1;   
}


// Função principal
int main (void) {

    int l[][4] = {
                 {1,1,1,0},
                 {0,1,1,0},
                 {1,0,1,1},
                 {0,0,1,1},
                 };
    int n = 4;

    a(l,n,0);
    printf("b) cidade = %d\n",b(l,n));
    printf("c) possui mão dupla (1) verdade (0) falso >>> %d\n",c(l,n,2));
    printf("d) qtd de cidades isoladas = %d\n",d(l,n));
    printf("e) qtd [...] = %d\n",e(l,n));
    printf("f) qtd [...] = %d\n",f(l,n));
    
    int cam[5] = {1,2,3,2,0};
    int m = 5;
    printf("g) %d\n",g(l,cam,m));
    
    return 0;
}
