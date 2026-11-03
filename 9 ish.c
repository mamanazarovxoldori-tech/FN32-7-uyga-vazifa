
#include <iostream>

int main() {
    
    float km,litr,sarf;

    printf("Masofani kiriting(km):");
    scanf("%f",&km);

    printf("Yoqilgi miqdorini kiriting (litr)");
    scanf("%f",&litr);

    sarf=(litr/km)*100;

    printf("100km uchun yoqligi sarf  %.2f litr",sarf);

    return 0;
}