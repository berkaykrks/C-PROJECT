#include <stdio.h>

int main() {
	float metre,cm,km;
	
	printf("Santimetre Uzunlugu gir: ");
	scanf("%f",&cm);
	
	metre= cm/100.0;
	km=cm/100000.0;
	
	printf("Metre Uzunlugu: %f\n",metre);
	printf("Kilometre Uzunlugu: %f",km);
	
	return 0;
}
