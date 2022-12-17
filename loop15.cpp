#include <stdio.h>

int main(){
	
	int say,i;
	
	printf("Sayi Giriniz : ");
	scanf("%d",&say);
	
	for(i=1;i<=say;i++)
	{
		if(say % i==0)
		{
			printf("%d, ",i);
		}
		
	}
	
	
	
	return 0;
}
