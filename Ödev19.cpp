#include <stdio.h>

int main() {
	int num, n, bitler;
	
	printf("Rastegele Sayi Gir: ");
	scanf("%d", &num);
	
	printf("Girilen nth bit kontrol (0-31): ");
	scanf("%d",&n);
	
	bitler = (num >> n) & 1;
	
	printf("Bu %d bit ayarlandı %d icin ",n,bitler);
	
	return 0;
}
