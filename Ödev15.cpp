#include <stdio.h>

int main(){
	float ing,fiz,mat,prog,verit;
	float toplam, ortalama,yuzde;
	
	printf("5 Adet Ders Notu Giriniz: ");
	scanf("%f%f%f%f%f",&ing,&fiz,&mat,&prog,&verit);
	
	toplam= ing+fiz+mat+prog+verit;
	ortalama= (toplam /5);
	yuzde=(toplam/500) *100;
	
	printf("Toplam Not: %f\n",toplam),
	printf("Not Ortalamas�: %.2f\n",ortalama);
	printf("Notlar�n Yuzdesi: %f",yuzde);
	
	return 0;
	
	
	
}
