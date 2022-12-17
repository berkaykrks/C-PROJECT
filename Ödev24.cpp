#include <stdio.h>
#define INT_SIZE sizeof(int)*8

int main(){
	int num, sira, i;
	
	printf("Rastgele Sayi Gir: ");
	scanf("%d",&num);
	
	sira = INT_SIZE - 1;
	
	for(i=0; i<INT_SIZE; i++)
	{
		if((num>>i)&1)
		{
			sira =i;
			
			break;
		}
	}
	
	printf("En Düsük sirada ayarlanmis bit %d a %d",num,sira);
	
	return 0;
	
}

