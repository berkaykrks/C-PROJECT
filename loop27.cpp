#include <stdio.h>

int main(){
	
	int a,b,i;
	
	printf("SAYÝ gir: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d, ",i);
		}
		
	}
	
	printf("Girilen deger ve tam bolenleri = %d",b);
	
	return 0;
}
