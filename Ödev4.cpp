#include <stdio.h>

int main(){
	
	float cevre,uzun,genis;
	
	printf("Uzunluk Giriniz:");
	scanf("%f",&uzun);
	printf("Genislik Giriniz:");
	scanf("%f",&genis);
	
	cevre= 2*(uzun+genis);
	
	printf("Dikdörtgenin Cevresi: %f",cevre);
	
	return 0;
	
	
}
