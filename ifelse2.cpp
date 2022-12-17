#include <stdio.h>

int main(){
	int say1,say2,say3;
	
	printf("3 ADET SAYI GIRINIZ: ");
	scanf("%d%d%d",&say1,&say2,&say3);
	
	if(say1>say2)
	{
		if(say1>say3)
		{		
			printf("%d en buyuktur. ",say1);
			
		}
		else
		{
			printf("%d en buyuktur.",say3);
		}
	}
	else
	{
		if(say2>say3)
		{
			printf("%d en buyuktur.",say2);
		}
		else if(say3>say2)
		{
			printf("%d en buyuktur", say3);
		}
		else
		{
			printf("hepsi esittir.");
		}
	}
	 
	return 0;
}
