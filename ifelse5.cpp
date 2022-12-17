#include <stdio.h>

int main (){
	int say1;
	
	printf("Sayi Giriniz: ");
	scanf("%d",&say1);
	
	if(say1 % 2 == 0)
		printf("(%d) Sayi Cift.",say1);
	else 
		printf("(%d) Sayi Tek",say1);
			
			
	return 0;
}
