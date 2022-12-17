#include <stdio.h>
#include <math.h>

int main(){
	double sayi1,us,son;
	
	printf("Sayý Giriniz: ");
	scanf("%lf", &sayi1);
	printf("Üssünü Giriniz: ");
	scanf("%lf", &us);
	
	son = pow(sayi1,us);
	
	printf("%.2lf ^ %.0lf = %.2lf",sayi1,us,son);
	
	
	
	
}
