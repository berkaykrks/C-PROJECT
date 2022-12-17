#include <stdio.h>
#define MAX_SIZE 100

void reverseStr(char arr[]);

int main()
{
	char arr[MAX_SIZE];
		
	printf("kelime gir: ");
	gets(arr);
	
    reverseStr(arr);	
	return 0;
}

void reverseStr(char arr[])
{
	int i=0,j=0;
    char reverse[MAX_SIZE];
	while(arr[i]!='\0')
	{
		i++;
	}
	while(arr[j]!='\0')
	{
		reverse[i-1]= arr[j];
		i--;
		j++;
	}
	reverse[j]='\0';
	
	printf("%s",reverse);
	
	
	
	
}
