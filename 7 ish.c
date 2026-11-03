include <iostream>

int main() {

  int n,a,b,c,t;

   printf("Uch xonali son kiriting:");
   scanf("%d",&n);

   a=n/100;
   b=(n/10)%10;
   c=n%10;

   t=c*100+b*10+a;

   printf("Teskari son=%d\n",t);
  
    return 0;
}