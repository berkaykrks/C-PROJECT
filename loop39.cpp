#include <stdio.h>

int main(){
	
	int i,j,say;
	
	printf("say gir: ");
	scanf("%d",&say);
	
	for(i=1;i<=say;i++)
	{
		for(j=1;j<=(say*i)*2;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
