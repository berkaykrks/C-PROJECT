#include <stdio.h>

int main () {
	float anaPara,zaman,oran, si;
	
	printf("Anaparay�  giriniz (miktar): ");
	scanf("%f",&anaPara);
	printf("Zamani Giriniz: ");
	scanf("%f", &zaman);
	printf("Oran Giriniz: ");
	scanf("%f",&oran);
	
	si=(anaPara*zaman*oran)/100;
	
	printf("Sonuc: %f",si);
	
	return 0;
	
	
}
