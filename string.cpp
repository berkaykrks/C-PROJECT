#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	char arr1[]={'go','get'};
	char arr[MAX_SIZE];
	
	printf(" turkce kelime giriniz: ");
	gets(arr);
	
	for(int i=0;i<arr[i]!='\0';i++)
	{
		
			if(arr[i]==arr1[i])
			{
				printf("Girilen kelime  dizide bulunuyor : %s",arr);
				
			}
			else
			{
				printf("Girilen kelime %s dizide bulunmuyor. ",arr);
			}
			
		
		
	}
	
	return 0;
		
		
		
}



