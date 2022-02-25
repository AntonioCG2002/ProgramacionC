//Contador de Horas Minutos y Segundos
#include <stdio.h>
int main(){
    float h, m, s, t1, t2, t3, t;
    printf("#Horas, minutos, segundos");
    scanf("%f %f %f", &h, &m, &s);
    t1=h*3600;
    t2=m*60;
    t3=s*1;
    t=t1+t2+t3;
    printf("#Segundos Total %.0f s",t);
    return 0;
}
