#include <stdio.h>
#define MAX_SIZE 100

int comp(char * str1,char *str2);

int main()
{
	char str1[MAX_SIZE];
	char str2[MAX_SIZE];
	int res;
	
	printf("yazý gir: ");
	gets(str1);
	printf("yazi gir: ");
	gets(str2);
	
	res=comp(str1,str2);
	
	if(res==0)
	{
		printf("her iki dizi esit.");
	}
	else if(res<0)
	{
		printf("ilk girilen digerinden kücük");
	}
	else
	{
		printf("ilk girilen diðerinden büyük");
	}
	
	return 0;
	
}

int comp(char * str1 , char * str2){
	int i=0;
	
	while(str1[i]==str2[i])
	{
		if(str1[i]=='\0' && str2[i]=='\0')
			break;
		
		
		i++;
	}
	
	return str1[i]-str2[i];
	
}
