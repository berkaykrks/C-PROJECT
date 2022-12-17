#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int dizi[MAX_SIZE];
	int sayi[MAX_SIZE];
	int uzun;
	int i,j;
	int say[MAX_SIZE];
	
	printf("uzunluk gir: ");
	scanf("%d",&uzun);
	
	printf("dizi elemanlarini gir: ");
	for(i=0;i<=uzun;i++)
	{
		scanf("%d",&dizi[i]);
	}
	int c=0;
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<uzun;j++)
		{
			if(dizi[i]==dizi[j+1])
			{
				sayi[c]=dizi[i];
				say[c]++;
			}
		
		}
		
	}
	for(c=0;c<uzun;c++)
	{
		printf("%d 'den %d tane var\n",sayi[c],say[c]);
	}
	
	
	
	
	return 0;
	
}

