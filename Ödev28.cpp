#include <stdio.h>
#define INT_SIZE sizeof(int)*8

int main(){
	
	int num,s�f�r,bir,i;
	
	printf("Rastgele sayi giriniz: ");
	scanf("%d",&num);
	
	s�f�r=0;
	bir=0;
	
	for(i=0; i<INT_SIZE; i++)
	{
		if(num&1)
			bir++;
		else
			s�f�r++;
			
		num>>=1;
		
	}
	
	printf("toplam s�f�r bit sayisi: %d", s�f�r);
	printf("toplam bir bit sayisi: %d",bir);
	
	return 0;
}
