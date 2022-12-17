#include <stdio.h>
#define MAX_SIZE 100
#define uzun 5

int main()
{
	int dizi[MAX_SIZE];
	int sayi[MAX_SIZE];
	
	int i,j=0;
	

	
	printf("dizi deger: ");
	for(i=0;i<uzun;i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	
	for(i=0;i<uzun;i++)
	{
		int sayac=0;
		for(j=0;j<uzun-1;j++)
		{
			if(dizi[i]==dizi[j+1])
			{
				sayac++;
			}
			
		}
	    sayi[i]=sayac;		
	}

	
	for(i=0;i<uzun;i++)
	{
		printf("max : ",sayi[i]);
	}
	
	
	return 0;
}
