#include <stdio.h>

int main(){
	int num;
	
	printf("Deger Giriniz: ");
	scanf("%d",&num);
	
	if(num & 1)
		printf("Bit %d Ayarlandi(1).",num);
	else
		printf("Bit %d Ayarlanmadi(0).",num);
		
	return 0;
	
	
}
