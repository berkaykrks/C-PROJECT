#include <stdio.h>
#define MAX_SIZE 100	
#include<conio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
	int secim=0;
	int i=0,hak=3;
	int pc=0;	
	int insan=0;
	
	printf("\t\t\t\t\tTAS KAGIT VE MAKAS OYUNUNA HOSGELDINIZ\n");
	/*	srand(time(NULL));
	int n;
	n=rand()%3+1;
	printf("rastgele sayi = %d",n);
	
	
	
	printf("\t Secim Yapiniz\n");
	printf("TAS SECMEK ICIN 1  - KAGIT SECMEK ICIN 2 - MAKAS SECMEK ICIN 3 =\n ");
	scanf("%d",&secim);*/
	
	while(hak>0)
	{
		srand(time(NULL));
		int n;
		n=rand()%3+1;
		
	
		
	
		printf("\t\t\t\t\t\t Secim Yapiniz\n");
		printf("\t\t\tTAS SECMEK ICIN 1  -  KAGIT SECMEK ICIN 2  -  MAKAS SECMEK ICIN 3  : ");
		scanf("%d",&secim);
		printf("\t\t\t\t\t\tBILGISYAR BUNU SECMISTI %d\n",n);
		
		if(secim==1)
		{
			if(n==1)
			{
				printf("\t\t\t\t\t\tONLAR DOST");
			}
			else if(n==2)
			{
				printf("\t\t\t\t\t\tKAGIT TASI SARAR\n");
				printf("\t\t\t\t\t\tBILGISAYAR KAZANDI\n");
				pc++;
			}
			else if(n==3)
			{
				printf("\t\t\t\t\t\tTAS MAKASI KIRAR\n");
				printf("\t\t\t\t\t\tINSAN KAZANDI\n");
				insan++;
			}
			else
			{
				printf("\t\t\t\t\t\tHATA\n");
			}
								
			
		}
		else if(secim==2)
		{
			if(n==1)
			{
				printf("\t\t\t\t\t\tKAGIT TASI SARAR\n");
				printf("\t\t\t\t\t\tINSAN KAZANDI\n");
				insan++;
			}
			else if(n==2)
			{
				printf("\t\t\t\t\t\tONLAR DOST\n");
			}
			else if(n==3)
			{
				printf("\t\t\t\t\t\tMAKAS KAGIDI KESER\n");
				printf("\t\t\t\t\t\tBILGISAYAR KAZANDI\n");
				pc++;
			}
			else
			{
				printf("\t\t\t\t\t\tHATA\n");
			}
		}
		else if(secim==3)
		{
			if(n==1)
			{
				printf("\t\t\t\t\t\tTAS MAKASI KIRAR\n");
				printf("\t\t\t\t\t\tBILGISAYAR KAZANDI\n");
				pc++;
			}
			else if(n==2)
			{
				printf("\t\t\t\t\t\tMAKAS KAGIDI KESER\n");
				printf("\t\t\tINSAN KAZANDI\n");
				insan++;
			}
			else if(n==3)
			{
				printf("\t\t\tONLAR DOST\n");
			}
			else
			{
				printf("\t\t\tHATA\n");
			}
		}
		else
		{
			printf("\t\t\thatali giris!!\n");
		}
		hak--;
	}
	printf("\t\t\t\t\t\tKAZANAN ISIM ASSAGIDA BULUNUYOR \n\n");
	
	if(insan>pc)
	{
		printf("\t\t\t\t\t\tINSAN KAZANDI");
	}
	else if(insan <pc)
	{
		printf("\t\t\t\t\t\tBILGISAYAR KAZANDI");
	}
	else
	{
		printf("\t\t\t\t\t\tDOSTLAR SAGOLSUN");
	}
	
	return 0;
}

