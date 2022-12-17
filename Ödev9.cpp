#include <stdio.h>

int main(){
	float santi,fahr;
	
	printf("Fahreinheit Derecesini Giriniz : ");
	scanf("%f",&fahr);
	
	santi=(fahr-32)*5/9;
	
	printf("%f fahreinheit = %f Santigrat", fahr,santi);

}
