#include <stdio.h>

int main () {
	int kenar1, kenar2,kenar3;
	printf("İki Kenarıda Giriniz: ");
	scanf("%d%d",&kenar1, &kenar2);
	
	kenar3 = 180 - (kenar1+kenar2);
	
	printf("Ucuncu Kenar: %d\n", kenar3);
	
	printf("%d + %d + %d = 180 ",kenar1,kenar2,kenar3);
	
	return 0;
}
