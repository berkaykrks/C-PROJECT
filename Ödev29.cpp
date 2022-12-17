#include <stdio.h>

#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE * 8 - 1

int rotateSol(int num, unsigned int rotation);
int rotateSag(int num,unsigned int rotation);

int main(){
	
	int num;
	unsigned int donus;
	
	printf("Rastgele Sayi giriniz: ");
	scanf("%d",&num);
	
	printf("Donus sayisini giriniz: ");
	scanf("%d",&donus);
	
	printf("%d sola donus %u zamani =%d \n\n",num, donus, rotateSol(num,donus));
	printf("%d saga donus %u zamani =%d\n\n",num,donus, rotateSag(num,donus));
	
	return 0;
	
}

int rotateSol(int num, unsigned int donus)
{
	int DROP_MSB;
	
	donus%= INT_BITS;
	
	while(donus--)
	{
		DROP_MSB = (num >> INT_BITS)&1;
		num=(num<<1)| DROP_MSB;
		
	}
	return num;
}

int rotateSag(int num, unsigned int donus)
{
	int DROP_LSB;
	
	donus%=INT_BITS;
	
	while(donus--){
		
		DROP_LSB=num&1;
		
		num=(num>>1)&(~(1<< INT_BITS));
		
		
		
	}
	
	return num;
}
