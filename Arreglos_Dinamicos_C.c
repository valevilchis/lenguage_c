#include <stdio.h>
#include <stdlib.h>

void leerMatriz (int **matrizA, int n, int m);
void imprimirMatriz (int **matrizA, int n, int m);

int main() {
    int opc;

    do {
        printf("\t Programa 'Arreglos Dinamicos. ' \n");
        printf("1. Programa 1. \n");
        printf("2. Programa 1 (Modificado). \n");
        printf("3. Salir. \n");
        printf("\n");
        printf("Seleccione la opcion: \n");
        scanf("%d", &opc);

        switch (opc) {
            case 1: {
                int **matrizA;
                int n, m;

                printf("Numero de renglones: \n");
                scanf("%d", &n);
                printf("Numero de columnas: \n");
                scanf("%d", &m);

                matrizA = (int**)malloc(n*(sizeof(int*)));
                for (int i = 0; i < n; i++){
                    matrizA[i] = (int*)malloc(m*(sizeof(int)));
                }


                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("Ingrese valor en : \n");
                        scanf("%d", &matrizA[i][j]);
                    }
                }
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("Los valores en matriz son:%d\n", matrizA[i][j]);
                    }
                    printf("\n");
                }

                if (matrizA != NULL) {
                    for (int i = 0; i < n; i++){
                        if (matrizA[i] != NULL)
                            free(matrizA[i]);
                    }
                    free(matrizA);
                }
            }
                break;
            case 2: {
                int **matrizA;
                int a, b;

                printf("Numero de renglones: \n");
                scanf("%d", &a);
                printf("Numero de columnas: \n");
                scanf("%d", &b);

                matrizA = (int**)malloc(a*(sizeof(int*)));
                for (int i = 0; i < a; i++){
                    matrizA[i]= (int*)malloc(b*(sizeof(int)));
                }

                leerMatriz(matrizA, a, b);
                imprimirMatriz(matrizA, a, b);

                if (matrizA != NULL) {
                    for (int i = 0; i < a; i++){
                        if (matrizA[i] != NULL)
                            free(matrizA[i]);
                    }
                    free(matrizA);
                }
            }
                break;
            default:
                break;
        }
    } while (opc != 3);
}

void leerMatriz (int **matrizA, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf ("Ingrese valores para la matriz.\n" );
            scanf ("%d", &matrizA[i][j]);
        }
    }
}

void imprimirMatriz (int **matrizA, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf ("Los valores son: %d\n", matrizA[i][j]);
        }
        printf ("\n");
    }
}