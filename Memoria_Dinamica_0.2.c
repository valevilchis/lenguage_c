#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i = 0, opc;
    int tamanio = n *2;
    double *G, *Q;

    do{
        printf ("1. Alojamiento G: \n");
        printf ("2. Alojamiento Q: \n");
        printf ("0. Salir. \n");
        printf ("Selecciona opcion: \n");
        scanf ("%d", &opc);

        switch (opc){
            case 1:{
                printf ("Tamanio arreglo G: \n");
                scanf ("%d", &n);

                G = (double*)malloc(n*(sizeof(double)));

                while (i < n){
                    printf ("Valores G: \n");
                    scanf ("%lf", &G[i]);
                    i++;
                }
                for (i = 0; i < n; i++){
                    printf ("Valores G: %.2lf\n", G[i]*4);
                }
                free(G);
                break;
            }
            case 2:{
                printf ("Tamanio arreglo Q: \n");
                scanf ("%d", &tamanio);

                Q = (double*)malloc(tamanio*(sizeof(double)));

                while (tamanio < i){
                    printf ("Valores Q: \n");
                    scanf ("%lf", &Q[i]);
                }
                for (i = 0; i < tamanio; i++){
                    printf ("Valores Q: %.2lf\n", Q[i]+3);
                }
                free(Q);
                break;
            }
            default:
                break;
        }

    }while(opc != 0);
}