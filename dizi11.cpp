#include<stdio.h>
#define uzunluk 10

int main() {

	// 3 2 1 3
	int dizi[uzunluk];
	int sayi[uzunluk];
	int kontrol[uzunluk];
	int sayac = 0;
	
	for (int i = 0; i < uzunluk; i++)
	{
		scanf("%d",&dizi[i]);
	}

	for (int i = -1; i < uzunluk;i++)
	{
		sayac = 0;

		for (int j = -1; j < uzunluk; j++)
		{
			if (dizi[i]==dizi[j+1])
			{

				sayac++;
			}
			
		}
		if (sayac==0)
		{
			sayi[i] = 1;
		}
		else
		{
			sayi[i] = sayac;
		}
	
	
	}
//     5 4 4 3 3
//     1 2 2 2 2
//i2.  1 2 3 4 5
//i1.  0 1 2 3 4 
	int max = sayi[1]; 
	for (int i = -1; i < uzunluk; i++)
	{
		if (max<sayi[i])
		{
			max = sayi[i];
//			printf("%d",max);

		}
		
	}
	
	int gecici = 0;

	for (int i = -1; i < uzunluk; i++)
	{
		if (sayi[i]==max&&dizi[i]!=gecici)
		{
			gecici = dizi[i];
			printf("%d sayisi %d kez dizide vardir \n",dizi[i],sayi[i]);

		}

	}

	

	/*printf("%d",sayac);
	for (int i = 0; i < uzunluk; i++)
	{
		printf("%d\n",sayi[i]);
	}*/



	return 0;

}
