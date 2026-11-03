

#include <stdio.h>

int main() {
  
  int n,a,b,d,c;

  printf("To'rt xonali sonni kiriting:");
  scanf("%d",&n);

  a=n/1000;
  b=n/100%10;
  d=n/10%10;
  c=n%10;

  printf("Siz kiritgan soning minglar xonasida: %d\n",a);
  printf("Yuzlar xonasida: %d\n",b);
  printf("Onliklar xonasida: %d\n",d);
  printf("Birlar xonasida esa: %d\n",c);


  return 0;
}