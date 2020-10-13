#include <stdio.h>
#include <stdlib.h>

int main() {
    int opc;
    do {

        printf ("\n\t Programa 'Apuntadores'..\n");
        printf ("1. Primer ejercicio.\n");
        printf ("2. Segundo ejercicio.\n");
        printf ("3. Tercer ejercicio.\n");
        printf ("4. Cuarto Ejercicio.\n");
        printf ("5. Salir");
        printf ("\n");

        printf ("Seleccione la opcion que desee..");
        scanf ("%d", &opc);

        switch (opc) {
            case 1: {
                double *p1, *p2, *p3;
                double n1, n2, sum;
                printf ("Ingrese el primer numero:");
                scanf ("%lf", &n1);
                printf ("Ingrese el segundo numero:");
                scanf ("%lf", &n2);

                p1 = &n1;
                p2 = &n2;
                p3 = &sum;

                *p3 = *p1 + *p2;

                printf ("El resultado de la suma es: %lf ", *p3); }
                break;
            case 2:;
                int a;
                int *ptr;
                ptr = &a;
                *ptr = 24;
                printf ("El valor de 'a', es: %d", a);
                printf ("El valor de 'ptr' es: %p", ptr);
                printf ("El valor de '*ptr' es: %d", *ptr);
                break;
            case 3:;
                float *x, *y, *z;
                float m, n;

                x = &m;
                y = &m;
                z = &n;

                *y = 45;
                *z = 10;

                *x = 3 * *y + 2 * *z;

                printf ("El valor de m es: &f", m);
                printf ("El valor de n es: %f", n);
                break;
            case 4:{
                double x = 30, y = 45;
                double *ptr1 = &x, *ptr2 = &y;
                double **ptr3 = &ptr1;

                x = *ptr1 + x;
                *ptr2 = 3 * y + 2 * (**ptr3);
                *ptr3 = &y;
                ptr3 = &ptr2;
                *ptr3 = &x;
                **ptr3 = (-*ptr2) - (*ptr1 * x);

                printf ("El valor de x es: %lf", x);
                printf ("El valor de y es: %lf", y);
               } break;
               default:
                   break;
        }
    }while (opc != 5);
}