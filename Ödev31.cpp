#include <stdio.h>

int main (){
	
	int num1,num2,enB;
	
	printf("Farkli Iki Sayi Giriniz: ");
	scanf("%d%d",&num1, &num2);
	
	enB=(num1>num2) ? num1 : num2;
	printf("Ikisi arasinda en b�y�k %d ve %d = %d",num1,num2,enB);
		
	return 0;
}
