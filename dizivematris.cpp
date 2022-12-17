#include <stdio.h>

double kup(double say);

int main()
{
	int say;
	double c;
	
	printf("Sayi gir: ");
	scanf("%d",&say);
	
	c=kup(say);
	printf("kup icin %d  %.2f",say,c);
	
	return 0;
	
}

double kup(double say)
{
	return (say*say*say);
}
