#include <stdio.h>
#include <math.h>

int main(){
	
	float sayi,kok;
	
	printf("Sayi Giriniz :");
	scanf("%f",&sayi);
	
	kok = sqrt(sayi);
	
	printf("%f = %f",sayi,kok);
	
	return 0;
	
}
