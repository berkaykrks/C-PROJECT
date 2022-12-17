#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int dizi[MAX_SIZE];
	int max, min,boyut,i;
	
	printf("sayi giriniz: ");
	scanf("%d",&boyut);
	
	
	printf("Dizi elemanlarýný giriniz: ");
	for(i=0;i<boyut;i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	max=dizi[0];
	min=dizi[0];
	
	
	for(i=1;i<boyut;i++)
	{
		if(dizi[i]>max)
		{
			max=dizi[i];
	    }
		if(dizi[i]<min)
		{
			min=dizi[i];
		}
	}
	
	printf("max deger : %d\n", max);
	printf("min deger : %d",min);
	
	
	return 0;
	
}
