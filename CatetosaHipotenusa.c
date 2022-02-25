#include <stdio.h>
#include <math.h>
int main() {
float h,c1,c2;
printf("C1 y C2: ");
scanf("%f %f", &c1, &c2);
h=sqrt(pow(c1,2)+pow(c2,2));
printf ("Hipotenusa es %f", h);
    return 0;
}
