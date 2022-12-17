#include <stdio.h>
#define MAX_SIZE 100

int main(){
	int dizi[MAX_SIZE];
	int i,boy,j;
	printf("dizi boyutnu gir: ");
	scanf("%d",&boy);
	
	printf("dizi elemanlarini gir: ");
	for(i=0;i<boy;i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	for(i=boy-1;i>=0;i--)
	{
		for(j=boy-i;j>=0;j--)
		{
			if(dizi[i]>dizi[j])	
			{
				printf("%d, ",dizi[i]);
			}
		}
		
		
	}
	
	
	return 0;
}
