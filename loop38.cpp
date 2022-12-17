#include <stdio.h>

int main()
{
	
	int say,i,j;
	
	printf("SAY GIR: ");
	scanf("%d",&say);
	
	for(i=1;i<=say;i++)
	{
		for(j=1;j<=say-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==say||j==i||j==1)
				printf("*");
			else
				printf(" ");
		}
		for(j=1;j<=say;j++)
		{
			
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==say||j==i||j==1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
				
	}
	
	
	return 0;
	
}
