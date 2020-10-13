#include <stdio.h>
#include <stdlib.h>

void leerMatriz (int ***matriz, int a, int b, int c);
void imprimirMatriz (int ***matriz, int a, int b, int c);

int main() {
    int ***matrizC, renglon, columna, profundidad;

    printf("Renglones de la matriz: \n");
    scanf("%d", &renglon);
    printf("Columnas de la matriz: \n");
    scanf("%d", &columna);
    printf("Profundidad de la matriz: \n");
    scanf("%d", &profundidad);

    matrizC = (int***)malloc(renglon*(sizeof(int)));
    for (int i = 0; i < renglon; i++) {
        matrizC[i] = (int**)malloc(columna*(sizeof(int)));
        for (int j = 0; j < columna; j++) {
            matrizC[i][j] = (int *) malloc(profundidad*(sizeof(int)));
        }
    }

    leerMatriz(matrizC, renglon,columna,profundidad);
    imprimirMatriz(matrizC,renglon,columna,profundidad);

    if (matrizC != NULL) {
        for (int i = 0; i < renglon; i++) {
            if (matrizC[i] != NULL)
                for (int j = 0; j < columna; j++) {
                    if (matrizC[i][j] != NULL)
                        free(matrizC[i][j]);
                }
            free(matrizC[i]);
        }
        free(matrizC);

        return 0;
    }
}

void leerMatriz (int ***matriz, int a, int b, int c){
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                printf("Ingrese valor en posicion [%d],[%d],[%d]: \n", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void imprimirMatriz (int ***matriz, int a, int b, int c){
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                printf("Los valores son: %d\n", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}