#include <stdio.h>
#include <stdlib.h>
#define a 5
#define b 3

int main() {
    int opc;
    do{
        printf ("\t Arreglos Dinamicos\n");
        printf ("\t Ejercicio 2. \n");
        printf ("1. Memoria Estatica. \n");
        printf ("2. Memoria Dinamica. \n");
        printf ("3. Salir. \n");
        printf ("\n");
        printf ("Selecciona opcion: \n");
        scanf ("%d", & opc);

        switch (opc){
            case 1:{
                int matrizA [a][b];

                for (int i = 0; i < a; i++){
                    for (int j = 0; j < b; j++){
                        printf ("Ingresa valor [%d],[%d]: \n", i, j);
                        scanf("%d", &matrizA[i][j]);
                    }
                }

                for (int i = 0; i < a; i++){
                    for (int j = 0; j < b; j++){
                        printf ("Los valores son: %d\n", matrizA[i][j]);
                    }
                    printf ("\n");
                }
                break;
            }
            case 2:{
                int **matrizA, ren, col;

                printf ("Renglones matriz: \n");
                scanf ("%d", &ren);
                printf("Columnas matriz: \n");
                scanf("%d", &col);

                matrizA = (int**)malloc(ren*(sizeof(int)));
                for (int i = 0; i < ren; i++){
                    matrizA[i] = (int*)malloc(col*(sizeof(int)));
                }

                for (int i = 0; i < ren; i++){
                    for (int j = 0; j < col; j++){
                        printf("Ingrese valor en [%d],[%d]:\n", i, j);
                        scanf("%d", &matrizA[i][j]);
                    }
                }

                for (int i = 0; i < ren; i++){
                    for (int j = 0; j < col; j++){
                        printf("Los valores son: %d\n", matrizA[i][j]);
                    }
                    printf("\n");
                }

                if (matrizA != NULL){
                    for (int i = 0; i < ren; i++){
                        if (NULL != matrizA[i])
                            free(matrizA[i]);
                    }
                    free(matrizA);
                }
                break;
            }
            default:
                break;
        }

    }while(opc != 3);
}