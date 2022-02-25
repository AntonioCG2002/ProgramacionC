#include <stdio.h>
int main(){
float e,p;
printf("#E");
scanf("%f", &e);
    if(e>70) {
        puts("APROBADO");
    }
    if(e<69) {
        puts("REPROBADO");
    }
    return 0;
}
