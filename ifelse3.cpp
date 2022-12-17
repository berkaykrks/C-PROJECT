#include <stdio.h>

int main() {
	
	int s1;
	baslangic:
	printf("Rastgele sayi giriniz: ");
	scanf("%d",&s1);
	
	if(s1>0)
	{
		printf("SAYI POZITIF");
	}
	else if(s1<0)
	{
		printf("SAYI NEGATIF");
		
	}
	else 
	{
		printf("SAYI 0\n");
		
		goto baslangic;
		
	}
	
	return 0;
}
