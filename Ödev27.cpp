#include <stdio.h>

int main() {
	
	int num,donenNum;
	
	printf("Rastgele Sayi Gir: ");
	scanf("%d", &num);
	
	donenNum= ~num;
	
	printf("Girdiginiz Deger:  %d (ondalikli) \n\n",num);
	printf("Bitler Cevirildikten Sonra Girdiginiz Deger: %d (ondalikli) \n",donenNum);
	
	
	return 0;
	
}
