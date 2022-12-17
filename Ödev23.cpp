#include <stdio.h>
#define INT_SIZE sizeof(int)*8


int main(){
	int num,sira=-1,i;
	
	printf("Rastgele Sayi Gir: ");
	scanf("%d", &num);
	
	for(i=0; i< INT_SIZE; i++){
		
		if((num>>i) & 1)
			sira=i;
			
		
	}
	
	if(sira != -1)
		printf("En yuksek sirada ayarlanmis bit %d a %d",num, sira);
	else
		printf("0 ayarlanmis bit yok.");
		
	return 0;
	
			
}
