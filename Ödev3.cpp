#include <stdio.h>

int main()
{
	int num1, num2;
	int top, cik, mod, carp;
	float bol;
	
	printf("Herhangi Iki Sayi Giriniz: ");
	scanf("%d%d",&num1, &num2);
	
	top=num1 + num2;
	cik=num1 - num2;
	carp= num1 * num2;
	bol= (float)num1 / num2;
	mod=num1 % num2;
	
	printf("Toplamý=%d \n",top);
	printf("Farki= %d\n",cik);
	printf("Carpimi= %d \n",carp);
	printf("Bolumu= %f\n",bol);
	printf("Mod= %d ",mod);
}
