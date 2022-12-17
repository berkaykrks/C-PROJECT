#include <stdio.h>

int topla(int say);

int main()
{
	int say;
	
	printf("sayi gir: ");
	scanf("%d",&say);
	
	topla(say);
}

int topla(int say)
{
	int top=0;
	
	while(say>0)
	{
		top+=say%10;
		say/=10;
	}
	return printf("%d",top);
}
