#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int dig=0,alph=0,oth=0,i=0;
	char str[MAX_SIZE];
	
	printf("string text enter: ");
	gets(str);
	
	while(str[i]!='\0')
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			alph++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			dig++;
		}
		else
		{
			oth++;
		}
		i++;
	}
	
	printf("alph %d",alph),
	printf("dig %d",dig);
	printf("oth %d",oth);
	
	return 0;
}
