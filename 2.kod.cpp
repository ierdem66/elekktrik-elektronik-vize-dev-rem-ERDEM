#include <stdio.h>                             // kütüphaneyi yazdým

int main()                                   // main i belirttim 
{
	int sayi, a, b ,c;
	int toplam_karesi ,istenen_sonuc ;     // integer larý belirttim

  for (sayi=1; sayi<=100; sayi++) {       // istenen sayýlarý sýrasýyla iþlemek için for döngüsü kullandým
  	a = sayi*sayi;                       // sayýlarýn karesini elde etmek için a deðerini atadým kareleri a deðeri oldu 
  	printf("%d \n",a);                  // karelerini ekrana yazdýrdým
  	b+=a;                              // a deðeri sürekli deðiþtiði için a deðerindeki herþeyi b deðerinde atadým yani karelerinin toplamaný buldum   
  	c+=sayi;                          // kodda istenildiði gibi sayýlarýn toplamýnýn karesini bulmak için for döngüsünde dönen sayýlarýn hepsini c ye atadým 
  	toplam_karesi = c*c;             // for döngüsünde dönen sayýlarýn toplamýnýn karesini bulmak için kendisi ile çarptým ve i_karesine atadým
  	istenen_sonuc = toplam_karesi-b;// kodda istenildiði gibi toplamýn karesinden karelerinin toplamýndan çýkarttým 
  }
  
  printf("toplami %d\n",b);                                   // ilk olarak ekrana sayýlarýn karelerinin toplamýný yazdýrdým
  printf(" topamanin karesinin toplami %d\n",toplam_karesi); // sonrasýnrda karelerinin toplamýný ekrana yazdýrdým
  printf("son islem = %d\n",istenen_sonuc);                 // en sonda toplamýn karesinden karelerinin toplamýndan çýkarttýðým sonucu ekrana yazdýrdým

}
