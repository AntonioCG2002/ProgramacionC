#include <stdio.h>
int main ()
{
  float  cm;
  printf("CONVERTIDOR DE M A CM\n");
    for(cm=0; cm <=100; cm=cm+20)
    printf("%.2fcm %.2f m\n",cm, (cm/100));
}
