#include <stdio.h>

main(){
	
	int j,i,say[20];
	
	printf("say gir: ");
	scanf("%d",&say);
	
	for(i=1;i<=say[20];i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=say[20];j++)
		{
			if(i==1 || i==say[20] || j==1 || j==say[20])
			{
				printf("*");
				
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
		
		for(j;j<say[i];j++)
		{
			printf("*");
		}
		
	}
	
	return 0;
}
