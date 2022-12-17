#include <stdio.h>

int main(){
	int num;
	
	printf("Sayi Giriniz: ");
	scanf("%d",&num);
	
	
	if(num%2==0)
		printf("\nSAYI CIFT.");
	else
		printf("\nSAYI TEK.");
		
	return 0;
	
}
