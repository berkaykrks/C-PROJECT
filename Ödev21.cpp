#include <stdio.h>

int main(){
	
	int num, n, yeniNum;
	
	printf("Rastgele Sayi Gir: ");
	scanf("%d",&num);
	
	printf("Silinicek son bit degerini gir(0-31): ");
	scanf("%d",&n),
	
	yeniNum = num & (~(1<<n));
	
	printf("Bit Temizleme Basarili. \n\n");
	printf("Sayi Silinmeden once %d bit: %d (ondalik)\n",n,num);
	printf("Sayi Silindikten Sonra %d bit: %d (ondalik)\n",n,yeniNum);
	
	return 0;
	
	
}
