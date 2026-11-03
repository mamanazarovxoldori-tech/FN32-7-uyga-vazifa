#include <stdio.h>
#include <math.h>

int main(){

int bh, bm,th,tm,f,d ,a;


printf("Boshlanish vaqtini kiriting:");
scanf("%d:%d",&bh,&bm);

printf("Tugash vaqtini kiriting:");
scanf("%d:%d",&th ,&tm);

d=(bh+bm)*60;
a=(th+tm)*60;
f=a-d;

printf("Siz  %d daqiqa o'tirgansiz",f);


   return 0;

}