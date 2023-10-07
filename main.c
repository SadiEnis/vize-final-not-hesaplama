#include <stdio.h>

int main()
{
    int ders_sayisi;
    printf("Ders sayinizi giriniz: ");
    scanf("%d", &ders_sayisi);

    int final_sinir;
    printf("Gecme notunuzu giriniz: ");
    scanf("%d", &final_sinir);

    int vize_yuzde, final_yuzde;
    printf("Vize yuzdesini giriniz: ");
    scanf("%d", &vize_yuzde);
    printf("Final yuzdesini giriniz: ");
    scanf("%d", &final_yuzde);

    for(ders_sayisi;ders_sayisi>0;ders_sayisi--)
    {
        char ders[100];
        printf("\nDersin adi: ");
        scanf("%s", &ders);
        float vize, finale;
        printf("vize notunuzu giriniz: ");
        scanf("%f", &vize);

        if(vize >= final_sinir)
            printf("Finalden almaniz gereken minimum not: %d \n", final_sinir);
        else
        {
        vize = vize*vize_yuzde/100;
        finale = final_sinir - vize;
        finale = finale*100/final_yuzde;
        printf("Finalden almaniz gereken en az not: %.2f \n", finale);
        }
    }
    return 0;
}
