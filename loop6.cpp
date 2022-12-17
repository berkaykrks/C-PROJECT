#include <stdio.h>

int main(){
	
	long long say;
	int sayac,i;
	
	printf("Deger Giriniz: ");
	scanf("%d",&say);
	
	while(say>0)
	{
		sayac++;
		
		say=say/10;
	}
	
	printf("Basamak sayisi = %d",sayac);
	
	return 0;
	
	
}
