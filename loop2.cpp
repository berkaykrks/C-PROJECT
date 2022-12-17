#include <stdio.h>

int main(){
	
	int i, basla;
	
	printf("Baslangic Degeri Giriniz: ");
	scanf("%d", &basla);
	
	for(i=basla; i>=1; i--)
	{
		printf("%d\n",i);
	}	
	return 0;
}
