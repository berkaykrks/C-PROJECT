#include <stdio.h>

int main(){
	
	int i,j,say;
	
	printf("say gir: ");
	scanf("%d",&say);
	
	for(i=1;i<=say;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j*i);
		}
		
		printf("\n");
		
	}
	
}
