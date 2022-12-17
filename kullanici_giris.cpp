#include <stdio.h>

int main()
{
	int i,j;
	char kullanici_Adi[10];
	char sifre[15];	
	
	printf("Kullanici adinizi giriniz: ");
	fgets(kullanici_Adi,sizeof(kullanici_Adi),stdin);
	printf("isim: ");
	puts(kullanici_Adi);
	
	char ad=kullanici_Adi;
	
	printf("Sifrenizi belirleyiniz: ");
	fgets(sifre,sizeof(sifre),stdin);
	puts(sifre);
	
	char sif=sifre;
	
	if(kullanici_Adi==ad && sifre==sif)
	{
		printf("Hosgeldiniz %c Bey",kullanici_Adi);
		printf("Yapacaginiz Islemi Seciniz: [p-y]\n");
		printf("          ***********************************\n");
		printf("          *        Karakuslar Bank          *\n");
		printf("          *           Hep Daha              *\n");
		printf("          *            IYISI                *\n");
		printf("          *            ICIN                 *\n");
		printf("          *         WORK ALL DAY            *\n");
		printf("          *           FOR MILF              *\n");
		printf("          *            BASSS                *\n");
		printf("          ***********************************\n");
	}
	else
	{
		printf("hata var.\n");
	}
	
}
