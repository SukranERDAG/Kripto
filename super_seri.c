#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,yeni_sayi;
    int taban;
    int *dizi;
    int i=1;
    printf("Sayiyi giriniz");
    scanf("%d",&sayi);
    printf("Taban degerini giriniz");
    scanf("%d",&taban);
    yeni_sayi=sayi;
    //dinamik dizinin ne kadar bellekte yer ayrýlacaðý hesaplanýr
    while (sayi>=taban)
    {
        i++;
        sayi=sayi/taban;
    }
    dizi=(int *) malloc (sizeof(int )* i);
     if( dizi == NULL ){
         puts("Yetersiz bellek alaný");
         exit(1);
       }
       int kalan;
       int sayac=0;
       //sayýyý istenilen taban degerine cevirdik.
    while (yeni_sayi>=taban)
    {
        kalan=yeni_sayi % taban;
        dizi[sayac]=kalan;

        sayac++;
        yeni_sayi=yeni_sayi/taban;

    }
    dizi[sayac]=yeni_sayi;
    int j;
    for (j=0;j<=sayac;j++)
    {
        for(i=1;i<=dizi[j];i++)
        {
                if(dizi[j]>0)
                    printf("%d^%d + ",taban,j);
        }
    }

    return 0;
}

