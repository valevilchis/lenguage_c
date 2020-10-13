#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array, sizeA;
    int i = 0, nMayor = 0, *z = NULL;

    printf ("Tamanio arreglo: \n" );
    scanf ("%d", &sizeA);

    array = (int*)malloc(sizeA*(sizeof(int)));

    while(i < sizeA){
        printf ("Valores arreglo: \n");
        scanf ("%d", &array[i]);
        i++;
    }

    for (i = 0; i < sizeA; i++){
        if (array[i] > nMayor)
            nMayor = array[i];
    }

    *z = nMayor;

    printf ("*z --> %d", nMayor);
    printf ("&z --> %p", &z);
    printf ("z --> %p", z);

    free(array);

    return 0;
}