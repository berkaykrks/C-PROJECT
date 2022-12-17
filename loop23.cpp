#include <stdio.h>

int main(){
	int i,j,e,satir;
	
	printf("Satir giriniz ve Sutun bilgisini giriniz:  ");
	scanf("%d",&satir);
	
	for(i=1;i<=satir; i++)
	{
		
		for(j=1;j<=i; j++)
		{
			printf("%d",i);
		}
		
		printf("\n");
	}
	
	return 0;
	
}
