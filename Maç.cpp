#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int i,sayi,dizi[14]={ 0 };
	char takim1,takim2;
	
	
	for(i=1; i< 15; i++)
	{
		sayi=rand() % 14 ;
		dizi[i]=sayi;
		printf("%d\t",dizi[i]);
		if(dizi[i]!=dizi[i+1])
		{
			if(sayi==1)
			{
				printf("Mert Turkoz\n");
				break;
			}
				
			else if (sayi==2)
			{
				printf("Mert Korkmaz\n");
				break;
			}
				
			else if(sayi==3)
			{
				printf("Furkan Ezer\n");
				break;
			}
				
			else if(sayi==4)
			{
				printf("Omer Faruk\n");
				break;
			}
			else if(sayi==5)
			{
				printf("Efe\n");
				break;
			}
			else if(sayi==6)
			{
				printf("Ferhat\n");
				break;
			}
				
			else if(sayi==7)
			{
				printf("Furkan Ta\n");
				break;
			}
			else if(sayi==8)
			{
				printf("Kerem San\n");
				break;
			}
			else if(sayi==9)
			{
				printf("Renas\n");
				break;
			}
			else if(sayi==10)
			{
				printf("Gokdeniz\n");
				break;
			}
			else if(sayi==11)
			{
				printf("Burak\n");
				break;
			}
			else if(sayi==12)
			{
				printf("Emirhan\n");
				break;
			}
			else if(sayi==13)
			{
				printf("Atahan\n");
				break;
			}
			else if(sayi==14)
			{
				printf("Berkay\n");
				break;
			}
			else
			{
				printf("yanlis bisi var");
				break;
			}				
				
		}
		else
			break;
		}
	
	
	return 0;
	
}
