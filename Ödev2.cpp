#include <stdio.h>

int main(){
	int num1,num2,top;
	printf("Ilk Numarayi Gir: ");
	scanf("%d", &num1);
	
	printf("Ikinci Numarayi Gir: ");
	scanf("%d", &num2);
	
	top=num1+num2;
	printf("%d + %d = %d Esittir.",num1, num2, top);
	
	return 0;
	
}
