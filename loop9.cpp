#include <stdio.h>
#include <math.h>

int main(){
	int say,top=0,sonB;
	
	printf("Sayi giriniz: ");
	scanf("%d",&say);
	
	while(say!=0)
	{
		sonB=say%10;
		top+=sonB;
		say= say/10;
		
		
	}	
	
	printf("Basamaklar�n toplami: %d",top);
	return 0;
}
