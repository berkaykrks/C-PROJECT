#include <stdio.h>

int main(){
	
	int say,dondur=0;
	
	printf("Sayi giriniz: ");
	scanf("%d",&say);
	
	while(say!=0)
	{
		dondur=(dondur *10) + (say%10);
		
		say/=10;
		
		
		
	}
	
	printf("Orjinal Hali %d",dondur);
	
	return 0;
	
}
