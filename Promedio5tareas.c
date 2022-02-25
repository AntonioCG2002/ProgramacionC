#include <stdio.h>
#include <math.h>
int main()
{
float p,p1,p2,p3,ef,tf,f;
printf("Valor p1,p2,p3,ef,tf");
scanf("%f %f %f %f %f",&p1,&p2,&p3,&ef,&tf);
p=((p1+p2+p3)/3)*.55;
ef*=.30;
tf*=.15;
f=p+ef+tf;
printf("La calificación final es es %.2f", f);
    return 0;
}
