#include <stdio.h>

int main(){
	
	int i,j,say;
	
	printf("SAY gir: "); scanf("%d",&say);
	
	for(i=0;i<say;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i==1 || i==say || j==2 || j==say)
				printf("*");
			else
				printf(" ");
		}
	}
}
