#include <stdio.h>

int main(){ 
  float daromad,sarf, tejash,jamgarma;

printf("Oylig daromadingizni kiriting:");
scanf("%f",&daromad);

printf("Har oylik sarflaydigan:");
scanf ("%f",&sarf);

tejash=daromad-sarf;
jamgarma=tejash*12;

printf("Bir oyda tejaydigan pulingiz:%.2f som\n",tejash);
printf("12 oyda jamgaradiga pulingiz:%.2f som\n",jamgarma);

  return 0;
}