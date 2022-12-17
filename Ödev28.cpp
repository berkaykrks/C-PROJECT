#include <stdio.h>
#define INT_SIZE sizeof(int)*8

int main(){
	
	int num,sýfýr,bir,i;
	
	printf("Rastgele sayi giriniz: ");
	scanf("%d",&num);
	
	sýfýr=0;
	bir=0;
	
	for(i=0; i<INT_SIZE; i++)
	{
		if(num&1)
			bir++;
		else
			sýfýr++;
			
		num>>=1;
		
	}
	
	printf("toplam sýfýr bit sayisi: %d", sýfýr);
	printf("toplam bir bit sayisi: %d",bir);
	
	return 0;
}
