#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int dizi[MAX_SIZE];
	int i,boyut,cift,tek;
	
	printf("dizi boyutunu gir : ");
	scanf("%d",&boyut);
	
	printf("dizi elemanlarýný gir: ");
	for(i=0;i<boyut;i++)
	{
		scanf("%d",&dizi[i]);
	}
	cift=0;
	tek=0;
	
	for(i=0;i<boyut;i++)
	{
		if(dizi[i]%2==0)
			cift++;
		else
			tek++;
	}
	
	printf("Toplam cift eleman sayisi: %d\n",cift);
	printf("toplam tek eleman sayisi : %d",tek);
	
	return 0;
}


