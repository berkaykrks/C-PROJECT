#include <stdio.h>


int main(){
	int taban,us;
	long long kuvvet=1;
	int i;
	
	printf("Taban Gir: ");
	scanf("%d",&taban);
	printf("Ussunu Giriniz: ");
	scanf("%d",&us);
	
	for(i=1; i<=us;i++)
	{
		kuvvet*=taban;
		
	}
	printf("%d ^ %d = %lld", taban,us,kuvvet);
	
	return 0;
	
}
