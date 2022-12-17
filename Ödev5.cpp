#include <stdio.h>

int main(){
	float uzun,genis, alan;
	
	printf("Uzunluk Giriniz: ");
	scanf("%f" ,&uzun);
	printf("Genislik Giriniz: ");
	scanf("%f" ,&genis);
	
	alan=uzun*genis;
	
	printf("Dikdortgenin Alani: %f",alan);
	
	
}
