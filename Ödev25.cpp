#include <stdio.h>
#define INT_SIZE sizeof(int)*8

int main(){
	int num,say=0,i;
	
	printf("Rastgele Sayi Gir: ");
	scanf("%d", &num);
	
	for(i=0; i<INT_SIZE; i++)
	{
		if((num>>i) & 1)
		{
			break;
		}
		
		say++;
		
	}
	printf("Sonda Bulunun sýfýrlarýn toplami %d a %d",num,say);
	
	return 0;
	
	
}
