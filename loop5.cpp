#include <stdio.h>

int main(){
	
	int i,j,say;
	
	printf("SAY gir: "); scanf("%d",&say);
	
	for(i=0;i<=say;i++)
	{
	
		for(j=0;j<=say-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=say;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
