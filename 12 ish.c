
#include <stdio.h>

int main() {
  
  int n;

  printf("Sonni kiriting: ");
  scanf("%d",&n);

  n++;
  n++;
  n++;

  printf("Siz kiritgan sonni ++ yordamida 3 marta oshrganda: %d\n",n);

  --n;
  --n;

  printf("Siz kiritgan sonni -- yordamda 2 marta kamaytrganda: %d\n ",n);



  return 0;
}