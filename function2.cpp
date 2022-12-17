#include <stdio.h>
#define MAX_SIZE 100


int main(){
	
	char kull[MAX_SIZE];
	char sifre[MAX_SIZE];
	
	char secim;
	
	printf("Kullanici adinizi giriniz: ");
	gets(kull);
	printf("Kullanici sifrenizi giriniz: ");
	gets(sifre);
	
	
	
	
	if(kull=="berkay" && sifre=="123456789")
	{
		printf("Hosgeldiniz %c Secim Yapiniz [a-b]: ",kull);
	}
	else 
		printf("HATALI GÝRÝS ");
}


