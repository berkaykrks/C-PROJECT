#include <stdio.h>

int main(){
	int say1,say2;
	
	printf("Iki Sayi Giriniz: ");
	scanf("%d%d",&say1,&say2);
	
	switch(say1>say2)
	{
		case 0:
			printf("%d Sayisi Maksimumdur.",say2);
			break;
		case 1:
			printf("%d Sayisi Minumumdur. ",say1);
			break;
		
	}
	
	return 0;
}
