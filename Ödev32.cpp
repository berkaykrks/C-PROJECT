#include <stdio.h>

int main(){
	float num1,num2,num3,enB;
	
	printf("Uc Adet Sayi giriniz: ");
	scanf("%f%f%f",&num1,&num2,&num3);
	
	
	enB= (num1>num2 && num1>num3) ? num1: (num2>num3)?num2:num3;
	
	printf("En Buyuk Sayi: %2.f , %2.f ,%2.f = %2.f",num1,num2,num3,enB);
	
	return 0;
	
}
