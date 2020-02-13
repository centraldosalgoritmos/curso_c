#include <stdio.h>

int main()
{
   int raio = 3;
   const double frac = 4.0/3.0;
   const float pi = 3.141592f;

   double v_esfera = frac * pi * (raio * raio * raio);
   printf("Raio: %d\n", raio);
   printf("Volume esfera: %lf", v_esfera);

    return 0;
}

