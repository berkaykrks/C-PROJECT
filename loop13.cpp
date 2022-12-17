#include <stdio.h>
#define BASE 10

int main(){
	long long say,n;
	int i,sonB;
	int freq[BASE];
	
	printf("Sayi Giriniz: ");
	scanf("%lld",&say);
	
	for(i=0;i<BASE;i++){
		freq[i]=0;
	}
	n=say;
	
	while(n!=0)
	{
		sonB=n%10;
		n/=10;
		freq[sonB]++;
		
	}
	printf("%lld is: \n",say);
	for(i=0;i<BASE; i++)
	{
		printf("%d = %d\n",i,freq[i]);
	}
	
	
	return 0;
}

