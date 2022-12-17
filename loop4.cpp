#include <stdio.h>

int main(){
	
	int i,n;
	
	printf("Sayi Giriniz: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t\n",i);
		}

	}
	for(i=0; i<n;i++)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
			}	
		
	}	
	return 0;
}
