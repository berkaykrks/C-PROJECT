#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
	char gercekKullanici[MAX_SIZE]="berkay karakus 24";
	int gercekSifre=123456789;
	char kullanici[MAX_SIZE];
	int sifre;
	int i;
	int hak=3;
	
	printf("\t\tKARAKUSBANK HOSGELDINIZ LUTFEN GIRIS YAPINIZ\n");
	back:
	printf("\t\tKALAN GIRIS HAKKINIZ %d\n",hak);
	printf("\t\tKullanici Adinizi Giriniz:");
	gets(kullanici);
	
	printf("\t\tSifrenizi Giriniz:");
	scanf("%d",&sifre);
	
	printf("\t\tHesaba Giris Yapilmaya Calisiliyor...\n");
	while(hak>=0)
	{
		
		if(gercekKullanici==kullanici && gercekSifre==sifre)
		{
			printf("\t\tGIRIS BASARILI\n");
			printf("\t\tHosgeldiniz %s\n",kullanici);
			break;
			goto bura;
			
		}
		else if(gercekKullanici[i]==kullanici[i] && gercekSifre!=sifre)
		{
			printf("\t\tGIRIS BASARISIZ\n");
			printf("\t\tSIFRE HATALI\n");
			break;
			goto back;
			hak--;
			
		}
		else if(gercekKullanici[i]!=kullanici[i] && gercekSifre==sifre)
		{
			printf("\t\tGIRIS BASARISIZ\n");
			printf("\t\tKULLANICI HATALI\n");
			break;
			goto back;
			hak--;
			
		}
		else
		{
			printf("\t\tGIRIS BASARISIZ\n");
			printf("\t\tKULLANICI VE SIFRE HATALI GIRILMISTIR\n");
			break;
			goto back;
			hak--;
		}	
	i++;
	
	}
	bura:
	printf("ne yapcanyarra");
	
	
		
	
	return 0;
	
}
