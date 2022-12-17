#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int dizi[MAX_SIZE];
	int sayi[MAX_SIZE];
	int i,j;
	int uzunluk=0;
	
	printf("dizi uzunluk: ");
	scanf("%d",&uzunluk);
	
	printf("diziye deger giriniz: ");
	for(i=0;i<uzunluk;i++)
	{
		scanf("%d",&dizi[i]);
	}
	int say[MAX_SIZE];
	j=1;
	for(i=0;i<uzunluk;i++)
	{
		
			if(dizi[i]==dizi[j])
			{
				sayi[i]=dizi[i];
				say[i]++;
			}
			else if(dizi[i]==dizi[j+1])
			{
				sayi[i]=dizi[i];
				say[i]++;
			}
			else if(dizi[i]==dizi[j+2])
			{
				sayi[i]=dizi[i];
				say[i]++;
			}
			else if(dizi[i]==dizi[j+3])
			{
				sayi[i]=dizi[i];
				say[i]++;
			}
			else if(dizi[i]==dizi[j+4])
			{
				sayi[i]=dizi[i];
				say[i]++;
			}
			else if(dizi[i]==dizi[j+5])
			{
				sayi[i]=dizi[i];
				say[i]++;
			}
			else if(dizi[i]==dizi[j+6])
			{
				sayi[i]=dizi[i];
				say[i]++;
			}
			
		j++;
	}
	
	for(i=0;i<7;i++)
	{
		printf("%d 'den %d tane var\n ",dizi[i],say[i]);
	}

	return 0;
}
