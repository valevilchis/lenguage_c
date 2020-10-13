#include <stdio.h>
#include <stdlib.h>
#define a 2
#define b 5
#define c 3

int main() {
    int opc;
    do{
        printf ("\t Arreglos dinamicos. \n");
        printf ("\t Ejercicio 1. \n");
        printf ("\n");
        printf ("1. Memoria Estatica. \n");
        printf ("2. Memoria Dinamica. \n");
        printf ("3. Salir. \n");
        printf("Seleccione opcion: \n");
        scanf ("%d", &opc);

        switch (opc){
            case 1:{
                int matriz[a][b][c];

                for (int i = 0; i < a; i++){
                    for (int j = 0; j < b; j++){
                        for (int k = 0; k < c; k++){
                            printf("Ingrese valor en posicion [%d],[%d],[%d]:\n", i, j, k);
                            scanf ("%d", &matriz[i][j][k]);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }

                for (int i = 0; i < a; i++){
                    for (int j = 0; j < b; j++){
                        for (int k = 0; k < c; k++){
                            printf("Los valores: %d\n", matriz[i][j][k]);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
                break;
            }
            case 2:{
                int ***matrizC, ren, col, prof;

                printf ("Renglones de la matriz: \n");
                scanf ("%d", &ren);
                printf("Columnas de la matriz: \n");
                scanf("%d", &col);
                printf("Profundidad de la matriz: \n");
                scanf ("%d", &prof);

                matrizC = (int***)malloc(ren*(sizeof(int)));
                for (int i = 0; i < ren; i++) {
                    matrizC[i] = (int **) malloc(col * (sizeof(int)));
                    for (int j = 0; j < col; j++) {
                        matrizC[i][j] = (int *) malloc(prof * (sizeof(int)));
                    }
                }

                    for (int i = 0; i < ren; i++){
                        for (int j = 0; j < col; j++){
                            for (int k = 0; k < prof; k++){
                                printf ("Ingrese valor en posicion [%d],[%d],[%d]: \n", i, j, k);
                                scanf ("%d", &matrizC[i][j][k]);
                            }
                            printf ("\n");
                        }
                        printf ("\n");
                    }

                for (int i = 0; i < ren; i++){
                    for (int j = 0; j < col; j++){
                        for (int k = 0; k < prof; k++){
                            printf ("Los valores son: %d\n", matrizC[i][j][k]);
                        }
                        printf ("\n");
                    }
                    printf ("\n");
                }

                if (matrizC != NULL){
                    for (int i = 0; i < ren; i++) {
                        if (matrizC[i] != NULL)
                            for (int j = 0; j < col; j++) {
                                if (matrizC[i][j] != NULL)
                                    free(matrizC[i][j]);
                            }
                        free(matrizC[i]);
                    }
                    free(matrizC);
                }
                break;
            }

            default:
                break;
        }
    } while (opc != 3);
    return 0;
}