#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziElemanSil(int sira ,int a[],int boyut);

int main()
{
	int siraNo;
	int n;
	
	printf("kac adet sayi uretilecek : ");
	scanf("%d",&n);
	
	int dizi[n];

	srand(time(0));
    for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]);

    }
	
	printf("\n");
	printf("diziden silinecek degerin sira no gir :");
	scanf("%d",&siraNo);
	
	diziElemanSil(siraNo,dizi,n);
	
	
}

void diziElemanSil(int sira ,int a[],int boyut)
{
	if(sira>=boyut+1)
	{
		printf("gecerli bir sira no giriniz. ");
		
	}
	else
	{
		for(int i=sira-1;i <boyut;i++)
		{
			a[i]=a[i+1];
		}
		
		for(int i=0;i<boyut-1;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	
}
