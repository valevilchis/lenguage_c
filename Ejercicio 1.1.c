#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b, *c;
    int i, j;

    a = &i;
    b = &i;
    c = &j;

    *b = 4;
    *c = 3;

    *a = 2 * *b + *c;

    printf ("El valor de i es: %d\n", i);
    printf ("El valor de j es: %d", j);

    system ("pause");

}