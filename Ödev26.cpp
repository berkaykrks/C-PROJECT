#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main(){
	int num, say=0,i,eyB;
	
	printf("Rastgele Sayi Giriniz: ");
	scanf("%d", &num);
	
	eyB= 1 << (INT_SIZE - 1);
	
	for(i=0; i<INT_SIZE; i++) {
		
		if((num<<i)&eyB)
		{
			break;
			
		}
		
		say++;
	}
	printf("En yuksek degerli bitlerin toplami %d a %d",num,say);
	
	return 0;
	
}

