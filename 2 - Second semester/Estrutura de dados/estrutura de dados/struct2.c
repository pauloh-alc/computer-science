#include <stdio.h>

char c = 'f';
int i;

struct exemplo {
  int x;
};
struct exemplo a;

int main (void) {
  
  printf("%p\n",&c);
  printf("%p\n",&i);
  printf("%p\n",&a);
  
  return 0;
}
