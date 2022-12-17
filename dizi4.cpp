#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int dizi[MAX_SIZE];
	int i,boyut,del;
	
	printf("dizi boyutu gir: ");
	scanf("%d",&boyut);
	
	printf("dizi elemanlarini gir: ");
	for(i=1;i<boyut;i++)
	{
		scanf("%d",&dizi[i]);		
	}
	
	printf("silincek yeri gir: ");
	scanf("%d\n",&del);
	
	
	if(del<0 || del>boyut)
	{
		printf("yanlýs yer girildi ");
	}
	else
	{
		for(i=del-1;i<boyut-1;i++)
		{
			dizi[i]=dizi[i+1];
		}
		boyut--;
		
		printf("eleman silindikten sonra dizi : ");
		for(i=0;i<boyut;i++)
		{
			printf("%d\t",dizi[i]);
		}
	}
	
	return 0;
	
	
}
