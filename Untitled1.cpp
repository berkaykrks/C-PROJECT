#include <stdio.h>

int main() {
	
	char charVal;
	unsigned char uCharVal;
	
	short shortVal;
	unsigned short uShortVal;
	
	int intVal;
	unsigned int uIntVal;
	
	long longVal;
	unsigned long uLongVal;
	
	long long longLongVal;
	unsigned long long uLongLongVal;
	
	float floatVal;
	double doubleVal;
	long double longDoubleVal;
	
	printf("Karakter Gir : ");
	charVal = getchar();
	getchar();
	
	printf("Baska Bir Karakter Gir: ");
	uCharVal = getchar();
	getchar();
	
	
	
	printf("Isaretli kisa deger gir : ");
	scanf("%hi", &shortVal);
	
	printf("Isaretsiz kisa deger gir : ");
	scanf("%hu", &uShortVal);
	
	printf("Isaretlý Integer bir deger gir : ");
	scanf("%d", &intVal);
	
	printf("Isaretsiz Integer deger gir : ");
	scanf("%lu", &uIntVal);
	
	printf("Isaretli long sayý gir : ");
	scanf("%ld", &longVal);
	
	printf("Isaretsiz Long Deger Gir: ");
	scanf("%lu", &uLongVal);
	
	printf("Isaretli long long deger gir: ");
	scanf("%lld", &longLongVal);
	
	printf("Isaretsiz long long deger gir: ");
	scanf("%llu", &uLongLongVal);
	
	printf("Float sayi gir : ");
	scanf("%f", &floatVal);
	
	printf("Double Sayi gir: ");
	scanf("%lf", &doubleVal);
	
	printf("Long Double sayi gir :");
	scanf("%lf", &longDoubleVal);
	
	printf("\nGirdigin Karakter: %c \n",charVal);
	printf("Isaretsýz girilen Karakter: %c \n\n",uCharVal);
	
	printf("Girilen isaretli kýsa deger: %hi \n", shortVal);
	printf("Girilen isaretsiz kýsa deger: %hu \n\n", uShortVal);
	
	printf("Girilen isaretli int deger: %d \n", intVal);
	printf("Girilen isaretsiz int deger: %lu \n\n", uIntVal);
	
	printf("Girilen isaretli long deger: %ld \n", longVal);
	printf("Girilen isaretsiz long deger: %lu \n\n", uLongVal);
	
	printf("Girilen float deger: %f \n",floatVal);
	printf("Girilen Double Deger: %lf \n", doubleVal);
	printf("Girilen LongDouble Deger: %lf \n", longDoubleVal);
	
	
	return 0;
	
	
}
