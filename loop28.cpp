#include <stdio.h>

int main(){
	int say,a,i,b;
	
	printf("SAYI GIR: ");
	scanf("%d",&say);
	
	for(i=1;i<=say;i++)
	{
		a+=i;
	}

	printf("Dogal sayilarin toplami: %d",a);
	
	return 0;	
}
