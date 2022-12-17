#include <stdio.h>


void func(int x);
int main()
{
	int x;
	printf("deger: ");
	scanf("%d",&x);
	
	func(x);
}
void func(int x)
{
	if (x > 1) 
		func(x / 2);
	putchar('0' + x % 2);
	
}
