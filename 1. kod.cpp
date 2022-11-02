#include <stdio.h>                                               // kütüphaneyi yazdým 

int main()                                                      // main i belirttim 
{
  int i, e;                                                   //intergerleri atadým 

  for (i=1; i<1000; i++) {                                 // her sayýya bakabilmek için for düngüsü kullandým
       if((i%3==0) || (i%5==0)) {                          // katsayýlarýný bulmak için mod kullandým ve iki deðerin katlarýnýn bulunmasý içinde || ( VE opertatörü) kullandým
          printf("%d sayisi 3 un ve 5 in katidir \n", i); // verilen deðerlerin ortak katý olan sayýlarý ekrana yazdýrdým
          e+=i;                                          // ortak sayýlarý a deðerine atadým yani toplamýþ oldum
       }
       
  }

  printf("3 un ve 5 in kati olan sayilarin toplami =  %d", e); // toplam deðeri yazdýrdým


}

