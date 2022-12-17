#include <stdio.h>
#define BITS sizeof(int)*8

int main(){
	int num, msb;
	
	printf("Rastgele Numara Gir: ");
	scanf("%d",&num);
	
	msb=1 << (BITS - 1);
	
	if(num & msb)
		printf("MSB %d ayarlandi (1).",num);
	else
		printf("MSB %d ayarlanmadi (0).",num);
		
	
	return 0;
}
