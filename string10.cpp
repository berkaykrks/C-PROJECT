#include <stdio.h>
#define MAX_SIZE 100

void buyutme(char *str);

int main()
{
	char str[MAX_SIZE];
	
	printf("get enter string : ");
	gets(str);
	
	printf("string degismeden once: %s\n ",str);
	
	buyutme(str);
	
	printf("string degistikten sonra: %s\n",str);
	
	return 0;
	
}

void buyutme(char *str)
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
		else if(str[i]>='A'&& str[i]<='z')
		{
			str[i]+=32;
		}
		i++;
	}
}
