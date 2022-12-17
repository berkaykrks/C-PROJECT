#include <stdio.h>

int main (){
	
	int say1;
	
	printf("Sayi giriniz :");
	scanf("%d", &say1);
	
	if((say1 %5 == 0) && (say1 %11 == 0))
	{
		printf("Girilen Sayi %d = 5'e ve 11'e Bolunuyor.",say1);
	}
	else
	{
		printf("Girilen Sayi %d = 5'e ve 11'e Bolunmuyor.",say1);
	}
	return 0;
	
}
