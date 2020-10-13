#include <stdio.h>

int main() {
   int *pointer_int, a, x = 7;
   float *pointer_float, b, y = 4.0;

   pointer_int = &x;

   printf ("El contenido de x es: %d\n", x);
   printf ("La direccion de x es %x\n", &x);
   printf ("pointer_int contiene: %x\n", &x);
   printf ("pointer_int apunta a: %d\n", x);
   printf ("\n");

   pointer_float = &y;

   printf ("El contendio de y es: %.2f\n", y);
   printf ("La direccion de y es: %x\n", &y);
   printf ("pointer_float contiene: %x\n", &y);
   printf ("pointer_float apunta a: %.2f\n", y);
   printf ("\n");

  a = *pointer_float;
  b = *pointer_int;

   printf ("a = el valor de x.. \n");
   printf ("b = el valor de y.. \n");

    return 0;
}