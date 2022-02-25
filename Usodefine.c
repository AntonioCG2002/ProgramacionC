#include <stdio.h>
#define LOWER 0 /* lC-mite inferior de la tabla */
#define UPPER 300 /* lC-mite superior */
#define STEP 20 /* tamaC1o del incremento */

 main () 
{
  
int fahr;
  
for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    
printf ("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

}
