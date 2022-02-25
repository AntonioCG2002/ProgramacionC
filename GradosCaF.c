#include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius para fahr = 0, 20, ..., 300 */
main ()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;			/* lC-mite inferior de la tabla de temperaturas */
  upper = 300;			/* lC-mite superior */
  step = 20;			/* tamaC1o del incremento */
  fahr = lower;
  while (fahr <= upper)
    {
      celsius = (5.0 / 9.0) * (fahr - 32.0);
      printf ("%3.0f %6.1f \n", fahr, celsius);
      fahr = fahr + step;
    }
}
