#include <stdio.h>

int main(){
	int num,n,yeniNum;
	
	printf("Rastgele Sayi Gir: ");
	scanf("%d",&num);
	
	printf("Gecis yapilacak nth bit degerini gir: ");
	scanf("%d",&n),
	
	yeniNum = num ^ (1<<n);
	
	printf("Bit Gecisi Basarili.\n\n");
	
	printf("Gecis Yapilmadan Once Sayi %d bit: %d (ondalik)\n",n,num);
	printf("Gecis Yapildiktan Sonra Sayi %d bit: %d (ondalik)\n",n,yeniNum);
	
	return 0;
	
	
}
