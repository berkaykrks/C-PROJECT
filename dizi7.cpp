#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int dizi[MAX_SIZE],dizi2[MAX_SIZE],ortak[MAX_SIZE];
	int i,boy,boy2,ortakUzun;
	int indeks1,indeks2,ortakIndeks;
	
	printf("dizi uzunlugunu gir: ");
	scanf("%d",&boy);
	
	printf("dizi elemanlarini gir : ");
	for(i=0;i<boy;i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	printf("ikinci dizi uzunlugunu gir: ");
	scanf("%d",&boy2);
	
	printf("ikinci dizi elemanlarini gir : ");
	for(i=0;i<boy2;i++)
	{
		scanf("%d",&dizi2[i]);
	}
	
	ortakUzun=boy+boy2;
	
	indeks1=0;
	indeks2=0;
	
	for(ortakIndeks=0;ortakIndeks<ortakUzun;ortakIndeks++){
		
		
		if(indeks1>=boy || indeks2>=boy2)
		{
			break;
		}
		if(dizi[indeks1]<dizi2[indeks2])
		{
			ortak[ortakIndeks]=dizi[indeks1];
			indeks1++;
		}
		else
		{
			ortak[ortakIndeks]=dizi2[indeks2];
			indeks2++;	
			
		}
	}	
	
	while(indeks1<boy)
	{
		ortak[ortakIndeks]=dizi[indeks1];
		ortakIndeks++;
		indeks1++;
	}
	while(indeks2<boy2)
	{
		ortak[ortakIndeks]=dizi2[indeks2];
		ortakIndeks++;
		indeks2++;
	}
	
	
	for(i=0;i<ortakUzun;i++)
	{
		printf("%d \t",ortak[i]);
	}
	return 0;
	
	
}

