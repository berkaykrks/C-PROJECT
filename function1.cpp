#include <stdio.h>


int cift(int a);
int tek(int a);
int main()
{
	int a;
	
	printf("sayi gir: ");
	scanf("%d",&a);
	
	if(cift(a))
		printf("girilen sayi  cift.");
	else if(tek(a))
		printf("girilen sayi  tek.");
	else
		printf("yanlıs birseyler var.");
		
		
		
	return 0;
}


int cift(int a)
{
	int i=0;
	if(a%2==0)
		i++;
	return i;
}
int tek(int a)
{
	int i=0;
	if(a%2==1)
		i++;
		
	return i;
}

