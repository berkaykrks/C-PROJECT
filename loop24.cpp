#include <stdio.h>

int main()
{
	int i,j,n,m;
	
	printf("n degerini gir: ");
	scanf("%d",&n);
	printf("M degeri: ");
	scanf("%d",&m);
	
	
	for(i=1; i<=n;i++)
	{
		for(j=1; j<=m; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	return 0;
	
}
