#include <stdio.h>
int main(){
float N;
printf("#N");
scanf("%f", &N);
    if(N>0) {
        puts("POSITIVO");
    }
    if(N<0) {
        puts("NEGATIVO");
    }
    if(N=0){
        puts("NEUTRO")
    }
    return 0;
}
