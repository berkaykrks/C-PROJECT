#include <stdio.h>
#define INT_SIZE sizeof(int)*8

int main (){
	int num,indeks,i;
	int sur[INT_SIZE];
	
	printf("Rastgele Sayi Gir: ");
	scanf("%d",&num);
	
	indeks= INT_SIZE - 1;
	
	while (indeks>=0)
	{
		sur[indeks]= num &1;
		indeks--;
		num >>= 1;
	}
	
	printf("Kutuphane Donusturuldu:");
	for(i=0; i<INT_SIZE; i++)
	{
		printf("%d", sur[i]);
	}
	return 0;
}
