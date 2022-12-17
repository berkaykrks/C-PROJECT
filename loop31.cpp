#include <stdio.h>

int main(){
	int i,j,d;
	int say;
	
	printf("sayi gir: ");
	scanf("%d",&say);
			
	for(i=1;i<=say;i++)
	{
		for(j=1;j<=say;j++)
		{
			if(i==1|| i==say || j==1|| j==say && j==say+10)
			{
				printf("*");	
			}
			else
			{
				printf(" ");	
			}
		}	
		
		printf("\n");	
		
		
		
	}
	
	
	return 0;
}
