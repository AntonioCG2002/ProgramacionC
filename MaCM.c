#include <stdio.h>
int main ()
{
  float m,cm;
  int inicio,final,paso;
  m=0;
  cm=0;
  inicio=0;
  final=100;
  paso=20;
  printf("CONVERTIDOR DE M A CM\n");
  while (m <= final){
      cm=m*100;
  printf("%f m\t %f cm\n",m,cm);
  m=m+paso;
  }
}

