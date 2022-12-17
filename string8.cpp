#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int i;
	char str[MAX_SIZE];
	
	printf("string text enter : ");
	gets(str);
	
	
	for(i=0;i<str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	str[i]='\0';
	
	printf("%s ",str);
	
	return 0;
	
}
