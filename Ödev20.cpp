#include <stdio.h>

int main() {
	int num, n ,yeniNum;
	
	printf("Rastgele Numara Gir: ");
	scanf("%d", &num);
	
	printf("Girilen nth bit kontrol(0-31): ");
	scanf("%d",&n);
	
	yeniNum=(1<<n)|num;
	
	printf("Bit Ba�ariyla ayarlandi. \n\n");
	printf("Numara Ayarlanmadan once %d bit: %d (ondalik olarak) \n ", n, num);
	printf("Numara Ayarland�ktan sonra %d bit: %d (ondalik olarak)\n", n, yeniNum);
	
	return 0;
	
}
