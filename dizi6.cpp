#include <stdio.h>
#define MAX_SIZE 100

int main(){
	
	int dizi[MAX_SIZE],per[MAX_SIZE];
	int i,j,boy,say;
	
	printf("boyut gir : ");
	scanf("%d",&boy),
	say=1;
	
	printf("dizi elemanlarini gir: ");
	for(i=0;i<boy;i++)
	{
		scanf("%d",&dizi[i]);
		
		per[i]=-1;
	}
	
	
	for(i=0;i<boy;i++)
	{
		for(j=i+1;j<boy;j++)
		{
			if(dizi[i]==dizi[j])
			{
				say++;
				per[j]=0;
		
			}
		}
		
		if(per[i]!=0)
		{
			per[i]=say;
		}
	}
	
	for(i=0;i<boy;i++)
	{
		if(per[i]==1)
		{
			printf("%d , ",dizi[i]);
		}
			
	}
	
	return 0;	
}
