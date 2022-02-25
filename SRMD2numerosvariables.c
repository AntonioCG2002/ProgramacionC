#include <stdio.h>
int main(){
int n1,n2, s=0, r=0, m=0, d=0;
printf("Valor n1 y n2");
scanf("%i %i",&n1, &n2);

s=n1+n2;
r=n1-n2;
m=n1*n2;
d=n1/n2;

printf("Suma:%i",s);
printf("Resta:%i",r);
printf("Multiplicación:%i",m);
printf("División:%i",d);

    return 0;
}
