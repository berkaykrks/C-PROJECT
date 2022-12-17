#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 1000

int main(){
	
	int dizi[MAX_SIZE];
	int i,max1,max2,min,boyut;
	
	printf("dizi boyutunu gir: ");
	scanf("%d",&boyut);
	
	printf("dizinin elemanlarini gir: ");
	for(i=0;i<boyut;i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	max1=max2=INT_MIN;
	
	for(i=0;i<boyut;i++)
	{
		if(dizi[i]>max1)
		{
			max2=max1;
			max1=dizi[i];
		}
		
		if(dizi[i]>max2 && dizi[i]<max1)
		{
			max2=dizi[i];
		}
		
	}
	printf("max1 %d\n",max1);
	printf("max2 %d",max2);
	
	return 0;
	
	
}
