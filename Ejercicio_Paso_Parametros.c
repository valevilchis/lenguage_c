#include <stdio.h>
#include <stdlib.h>

float promedio (float calific[]);
float promedio1 (float calific[], float tamanio);
float suma (float *valor, float *valor1);
float resta (float *valor1, float *valor2);
float multiplicacion (float *valor2, float *valor3);
float division (float *valor2, float *valor4);


int main() {
    int opc;

    do{
        printf ("\tPrograma 'Paso por Parametros..\n");
        printf ("1. Promedio. \n");
        printf ("2. Promedio (Calific Asignada.) \n");
        printf ("3. Calculadora. \n");
        printf ("4. Salir. \n");
        printf ("\n");
        printf ("Eliga la opcion deseada. \n");
        scanf ("%d", &opc);

        switch (opc){
            case 1:{
                float califica[7], resultado;

                printf ("\tPrograma obtener promedio. \n");
                for (int i = 0; i < 7; i++){
                    printf ("Ingrese la calificacion %d\n", i+1);
                    scanf ("%f", &califica[i]);
                }
                resultado = promedio(califica)/7;
                printf ("El promedio es %.2f \n", resultado);
            }
                break;
            case 2:{
                float alumno1[3] = {9.7, 8.2, 7.0}, res1;
                float alumno2[5] = {5.9, 10.0, 8.5, 9.1, 6.2}, res2;

                printf ("\tPrograma calific[] asignada. \n");

                for (int i = 0; i < 3; i++){
                    printf ("Las calificaciones 'Alumno 1' son: %.2f \n", alumno1[i]);
                }
                for (int j = 0; j < 5; j++){
                    printf ("Las calificaciones 'Alumno 2' son: %.2f \n", alumno2[j]);
                }

                res1 = promedio1(alumno1, 3);
                res2 = promedio1(alumno2, 5);

                printf ("El promedio 'Alumno 1' es: %.2f \n", res1);
                printf ("El promedio 'Alumno 2' es: %.2f \n", res2);
            }
                break;
            case 3:{
                int opc1;
                printf ("\t Calculadora basica. \n");
                printf ("1. Suma. \n");
                printf ("2. Resta. \n");
                printf ("3. Multiplicacion. \n");
                printf ("4. Division. \n");
                printf("\n");
                printf ("Elige la opcion que desee: \n");
                scanf ("%d", &opc1);

                switch (opc1){
                    case 1:{
                        float numero1, numero2, resultado;

                        printf ("Ingrese dos numeros para sumar: \n");
                        scanf("%f %f", &numero1, &numero2);

                        resultado = suma(&numero1, &numero2);

                        printf ("El resultado es: %.2f \n", resultado);
                    }
                        break;
                    case 2:{
                        float numero1, numero2, resultado;

                        printf ("Ingrese dos numeros para restar: ");
                        scanf ("%f %f", &numero1, &numero2);

                        resultado = resta(&numero1, &numero2);

                        printf ("El resultado es: %.2f \n", resultado);
                    }
                        break;
                    case 3:{
                        float numero1, numero2, resultado;

                        printf ("Ingrese dos numeros para multiplicar: ");
                        scanf ("%f %f", &numero1, &numero2);

                        resultado = multiplicacion(&numero1, &numero2);

                        printf ("El resultado es: %.2f \n", resultado);
                    }
                        break;
                    case 4:{
                        float numero1, numero2, resultado;

                        printf ("Ingrese dos numeros para dividir: \n");
                        scanf ("%f %f", &numero1, &numero2);

                        resultado = division(&numero1, &numero2);

                        printf ("El resultado es: %.2f \n", resultado);
                    }
                        break;
                    default:
                        break;
                }
            }
        }
    }while (opc != 4);
    return 0;
}

float promedio (float calific[]){
    float promedio = 0.0;
    for (int i = 0; i < 7; i++)
        promedio += calific[i];
    return (promedio);
}

float promedio1 (float calific[], float tamanio) {
    float prom = 0.0;
    for (int i = 0; i < tamanio; i++)
        prom += calific[i];
    return (prom)/tamanio;
}


float suma (float *valor, float *valor1){
    float res_sum;
        res_sum = *valor + *valor1;
    return res_sum;
}

float resta (float *valor1, float *valor2){
    float res_rest;
        res_rest = *valor1 - *valor2;
    return res_rest;
}

float multiplicacion (float *valor2, float *valor3){
    float res_mult;
        res_mult = *valor2 * *valor3;
    return res_mult;
}

float division (float *valor3, float *valor4){
    float res_divid;
        res_divid = *valor3 / *valor4;
    return res_divid;
}

