#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	char txt1[MAX_SIZE];
	char reverse[MAX_SIZE];
	int i,j;
	
	printf("bir kelime gir: ");
	gets(txt1);
	i=0;
	while(txt1[i]!='\0')
	{
		i++;
	}
	j=0;
	while(txt1[j]!='\0')
	{
		reverse[i]=txt1[j];
		i--;
		j++;
	}
	reverse[j]='\0';
	
	printf("tersten kelime %s ",reverse);
	
	return 0;
	
	
}
