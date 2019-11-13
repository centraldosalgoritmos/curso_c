#include <stdio.h>
#include <float.h>

int main () {

   printf("Valor max = %.10e\n", FLT_MAX);
   printf("Valor min = %.10e\n", FLT_MIN);
   printf("Número de digitos = %.10e\n", FLT_MANT_DIG);
   printf("Valor max = %.10e\n", DBL_MAX);
   printf("Valor min = %.10e\n", DBL_MIN);
   printf("Número de digitos = %.10e\n", DBL_MANT_DIG);
   printf("Valor max = %.10e\n", LDBL_MAX);
   printf("Valor min = %.10e\n", LDBL_MIN);
   printf("Número de digitos = %.10e\n", LDBL_MANT_DIG);

   return 0;
}



