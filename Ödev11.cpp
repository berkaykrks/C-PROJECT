#include <stdio.h>
#include <math.h>

int main(){
	double sayi1,us,son;
	
	printf("Say� Giriniz: ");
	scanf("%lf", &sayi1);
	printf("�ss�n� Giriniz: ");
	scanf("%lf", &us);
	
	son = pow(sayi1,us);
	
	printf("%.2lf ^ %.0lf = %.2lf",sayi1,us,son);
	
	
	
	
}
