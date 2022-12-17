#include <stdio.h>

int main(){
	int i,j,end, asal,top=0;
	
	printf("Sayi Giriniz: ");
	scanf("%d",&end);
	
	for(i=2; i<=end; i++)
	{
		asal=1;
		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				asal=0;
				break;
			}
		}
		if(asal==1)
		{
			top+=i;
		}
	}
	
	printf("Girdiginiz 1 den %d toplami = %d",end,top);
	return 0;
	
	
}
