#include <stdio.h>

int main (void) {
    float *v;
    float *j;
    float d = 15.0;
    float i = 17.0;

    j = &d;
    v = &i;

    *v = *j;

    printf("-->%f\n-->%f",i,d);

    v = j;

    printf("--> %f",*v);
    return 0;
}
