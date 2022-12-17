#include <stdio.h>

int main(){
	int i,j,asal,say;
	
	printf("Sayi giriniz: "),
	scanf("%d",&say);
	
	for(i=2; i<=say;i++)
	{
		if(say%i==0)
		{
			asal=1;
			for(j=2;j<=i/2;j++)
			{
					if(i%j==0)
					{
						asal=0;
						break;
					}
			
				
			}
			
			if(asal==1)
				{
					printf("%d,",i);
			
				}
		}
		
	}
	
	return 0;
	
}
