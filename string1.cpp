#include <stdio.h>
#define MAX_SIZE 100
int main()
{
	char a[MAX_SIZE];
	char b[MAX_SIZE];
	
	int i,j;
	
	printf("bir yazý giriniz: ");
	gets(a);
	printf("bir yazý giriniz: ");
	gets(b);
	
	
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	j=0;
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;
	}
	
	a[i]='\0';
	
	
	
	printf("girilen: %s",a);
	
}
