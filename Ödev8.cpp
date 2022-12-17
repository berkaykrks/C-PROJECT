#include <stdio.h>

int main(){
	float santi, fahr;
	
	printf("Santigrat Derecesini giriniz: ");
	scanf("%f",&santi);
	
	fahr=(santi*9/5)+32;
	
	printf("%f C = %f Fahreinheit",santi,fahr);	
}
