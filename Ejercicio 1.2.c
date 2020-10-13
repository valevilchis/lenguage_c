#include <stdio.h>
#include <stdlib.h>

int main() {
    double a = 100, b = 200;
    double *p1 = &a, *p2 = &b;
    double **p3 = &p2;

    a = *p1 + 2 * b;
    *p2 = 3 * a + 3 * **p3;
    *p3 = &b;
    p3 = &p2;
    *p3 = &a;
    **p3 = -*p2 - (*p1 * b);

    printf ("El valor de a es: %.2lf\n", a);
    printf ("El valor de b es: %.2lf\n", b);

    system ("pause");
}