#include <stdio.h>                                               // k�t�phaneyi yazd�m 

int main()                                                      // main i belirttim 
{
  int i, e;                                                   //intergerleri atad�m 

  for (i=1; i<1000; i++) {                                 // her say�ya bakabilmek i�in for d�ng�s� kulland�m
       if((i%3==0) || (i%5==0)) {                          // katsay�lar�n� bulmak i�in mod kulland�m ve iki de�erin katlar�n�n bulunmas� i�inde || ( VE opertat�r�) kulland�m
          printf("%d sayisi 3 un ve 5 in katidir \n", i); // verilen de�erlerin ortak kat� olan say�lar� ekrana yazd�rd�m
          e+=i;                                          // ortak say�lar� a de�erine atad�m yani toplam�� oldum
       }
       
  }

  printf("3 un ve 5 in kati olan sayilarin toplami =  %d", e); // toplam de�eri yazd�rd�m


}

