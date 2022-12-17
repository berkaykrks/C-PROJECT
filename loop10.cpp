#include <stdio.h>

int main(){
	int say,sonB;
	long long sonuc=1;
	
	printf("Sayi Giriniz: ");
	scanf("%d",&say);
	
	while(say!=0)
	{
		sonuc=sonuc * (say%10);
		say=say/10;
		
	}
	
	
	printf("Rakamlarý carpimi = %lld",sonuc);
	return 0;
	
	
	
	
}
