#include <stdio.h>                             // k�t�phaneyi yazd�m

int main()                                   // main i belirttim 
{
	int sayi, a, b ,c;
	int toplam_karesi ,istenen_sonuc ;     // integer lar� belirttim

  for (sayi=1; sayi<=100; sayi++) {       // istenen say�lar� s�ras�yla i�lemek i�in for d�ng�s� kulland�m
  	a = sayi*sayi;                       // say�lar�n karesini elde etmek i�in a de�erini atad�m kareleri a de�eri oldu 
  	printf("%d \n",a);                  // karelerini ekrana yazd�rd�m
  	b+=a;                              // a de�eri s�rekli de�i�ti�i i�in a de�erindeki her�eyi b de�erinde atad�m yani karelerinin toplaman� buldum   
  	c+=sayi;                          // kodda istenildi�i gibi say�lar�n toplam�n�n karesini bulmak i�in for d�ng�s�nde d�nen say�lar�n hepsini c ye atad�m 
  	toplam_karesi = c*c;             // for d�ng�s�nde d�nen say�lar�n toplam�n�n karesini bulmak i�in kendisi ile �arpt�m ve i_karesine atad�m
  	istenen_sonuc = toplam_karesi-b;// kodda istenildi�i gibi toplam�n karesinden karelerinin toplam�ndan ��kartt�m 
  }
  
  printf("toplami %d\n",b);                                   // ilk olarak ekrana say�lar�n karelerinin toplam�n� yazd�rd�m
  printf(" topamanin karesinin toplami %d\n",toplam_karesi); // sonras�nrda karelerinin toplam�n� ekrana yazd�rd�m
  printf("son islem = %d\n",istenen_sonuc);                 // en sonda toplam�n karesinden karelerinin toplam�ndan ��kartt���m sonucu ekrana yazd�rd�m

}
