#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	
	char str[MAX_SIZE];
	char str1;
	int i,find;
	
	printf("text string enter: ");
	gets(str);
	
	printf("kacinci indeks: ");
	scanf("%d",&find);
	
	str1=str[find];
	
	printf("aranan indeks = %c",str1);
	
	return 0;
	
	
	
	
}
