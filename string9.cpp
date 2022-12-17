#include <stdio.h>
#define MAX_SIZE 100


void yerDegis(char *str,char a,char b);

int main()
{
	char str[MAX_SIZE];
	char a;
	char b;
	int i;
	
	printf("Cümle giriniz: ");
	gets(str);
	
	printf("degistirmek istediginiz kelimeyi giriniz: ");
	a=getchar();
	
	getchar();
	
	
	printf("yerine koymak istediginiz kelimeyi giriniz: ");
	b=getchar();
	
	
	yerDegis(str,a,b);
	
	
	printf("yeni cümle : %s",str);
	
	return 0;
	
}

void yerDegis(char *str,char a,char b)
{
	int i,last;
	last=-1;
	i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]==a)
		{
			last=i;
		}
		i++;
	}
	
	if(last!=-1)
	{
		str[last]=b;
	}
	
}
