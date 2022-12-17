#include <stdio.h>
#define MAX_SIZE 100

int len(char arr[]);

int main()
{
	char arr[MAX_SIZE];
	printf("string deger girin: ");
	gets(arr);
	
	int sayy=len(arr);
	
	printf("deger: %d",sayy);
	
	
}

int len(char arr[])
{
	int i;
	
	while(arr[i]!='\0')
	{
		i++;
	}
	
	return i;
	
}

