#include <stdio.h>

int f1 (int n) {
    if (n <= 0) 
      return 1;
    else
      return n*f2(n);
}

int f2 (int n) {
    if (n <= 0) 
      return 1;
    else
      return n*f1(n-1);
}

int main (void) {
    printf("--> %d\n",f1(3));
    printf("--> %d\n",f2(3));
    return 0;
}
