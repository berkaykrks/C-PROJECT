#include <stdio.h>

int main()
{
	int i=1,j=1,n,x;
	
	printf("say gir : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
		
		
		
	}
	

	return 0;
}
