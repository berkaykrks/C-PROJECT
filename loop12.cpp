#include <stdio.h>

int main(){
	int say,n,ters;
	
	printf("Sayi giriniz: ");
	scanf("%d",&say);
	n=say;
	
	
	
	while(say!=0)
	{
		ters = (ters*10)+(say%10);
		say/=10;
		
		
	}
	
	
	if(ters==n)
	{
		printf("Sayi Palindrome Sayidir %d ",n);
		
	}
	else
		printf("Sayi Palindrome Deðildir %d",n);
	
	return 0;
}
