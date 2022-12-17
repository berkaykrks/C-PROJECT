#include <stdio.h>

int cift(int say);
int tek(int say);
int main()
{
	int say;
	
	printf("sayi gir: ");
	scanf("%d",&say);
	
	cift(say);
	tek(say);
}

int cift(int say)
{
	printf("-----------cift sayilar--------\n");
	int i;
	for(i=1;i<=say;i++)
	{
		if(i%2==0)
			printf("%d, ",i);
	}
	printf("\n");
}
int tek(int say)
{
	printf("-----------tek sayilar---------\n");
	
	int i;
	for(i=1;i<=say;i++)
	{
		if(i%2==1)
			printf("%d,",i);
	}
}
