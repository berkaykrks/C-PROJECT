#include <stdio.h>

int main(){
	int num;
	
	printf("Sayi Gir: ");
	scanf("%d",&num);
	
	switch(num%2)
	{
		case 0:
			printf("Sayi Ciftir.");
			break;
		case 1:
			printf("Sayi Tektir.");
			break;
	}
	
	return 0;
	
	
}
