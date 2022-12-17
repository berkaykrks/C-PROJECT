#include <stdio.h>
#define MAX_SIZE 100

void boslukSil(char *str);

int main()
{
	char str[MAX_SIZE];
	
	printf("string enter : ");
	gets(str);
	
	printf("bosluk silinmeden once '%s'\n",str);
	
	boslukSil(str);
	
	printf("new string '%s'",str);
	
	return 0;

}

void boslukSil(char *str)
{
	int i=0,index=-1;
	
	while(str[i]!='\0')
	{
		if(str[i]!=' '&& str[i]!='\n'&& str[i]!='\t')
		{
			index=i;
		}
		i++;
		
	}
	str[index+1]='\0';
	
}
