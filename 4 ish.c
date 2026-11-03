
#include <stdio.h>

int main()
{
 float narx,foiz, chegirma,yangi_narx;

printf("Mahsulot narxini kiriting: ");
scanf("%f",&narx);

printf("CHegirma foizini kiriting:");
scanf("%f",&foiz);

chegirma=narx*foiz/100;
yangi_narx=narx-chegirma;

printf("CHegirma summasi:%.2f\n",chegirma);
printf("chegirmedan keyingi narx:%.2f\n",yangi_narx);

return 0;

}