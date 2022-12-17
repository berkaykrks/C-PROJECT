#include <stdio.h>
#define MAX_SIZE 100


int main()
{
	char str[MAX_SIZE];
	char ara[MAX_SIZE];	
	
	printf("string enter: ");
	gets(str);
	
	printf("aranan string: ");
	gets(ara);
	
	int i=0,index=0,aranan=0;
	
	
	
	while(str[i]!='\0')
	{
		if(str[index]==ara[0])
		{
			aranan=1;
			while(ara[i]!='\0')
			{
				if(str[index+i]!=ara[i])
				{
					aranan=0;
					break;
					
				}
				i++;
			}
			
		}
		if(aranan==1)
		{
			break;
		}
		index++;
	}
	
	if(aranan==1)
	{
		printf("%s ara %d",ara,index);
	}
	else
	{
		printf("%s",aranan);
	}
		
	return 0;
	
}

