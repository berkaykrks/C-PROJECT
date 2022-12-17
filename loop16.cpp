#include <stdio.h>

int main(){
	int say,i;
	unsigned long long gre=1LL;
	
	printf("Sayi giriniz: ");
	scanf("%d",&say);
	
	for(i=1;i<=say;i++)
	{
		gre*=i;
	}
	
	printf("%llu , %d",gre,say);
	
	return 0;
}
