#include <stdio.h>
#define SIZE 8

int main(){
	char ikili[SIZE+1], tamamlayani[SIZE+1];
	int i,eror=0;
	
	printf("%d Bitlik1 Sayi giriniz: ",SIZE);
	
	gets(ikili);
	
	for(i=0;i<SIZE;i++)
	{
		if(ikili[i]=='1')
		{
			tamamlayani[i]='0';
		}
		else if(ikili[i]=='0')
		{
			tamamlayani[i]='1';
		}
		else
		{
			printf("Gecersiz Giris.");
			eror=1;
			break;
		}
	}
	
	if(eror==0)
	{
		printf("orjinal ikili =  %s\n",ikili);
		printf("tamamlayanlari = %s",tamamlayani);
		
		
	}
	
	return 0;
}

