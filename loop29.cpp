#include <stdio.h>

int main(){
	int say=0,top=0,son=0;
	
	printf("SAYI GIRINIZ: ");
	scanf("%d",&say);
	
	while(say!=0)
	{
		son+=say%10;
		top=son;
		say/=10;
	}
	printf("SAYININ RAKAMLARI TOPLAMI %d",top);
	
	return 0;
	
}
