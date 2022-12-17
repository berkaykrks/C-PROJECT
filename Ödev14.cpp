#include <stdio.h>
#include <math.h>

int main(){
	float kenar, alan;
	
	printf("Eskenar ucgenin kenarýný giriniz: ");
	scanf("%f",&kenar);
	
	alan=(sqrt(3)/4)*(kenar*kenar);
	
	printf("Eskenar ucgenin alaný : %f",alan);
	
	return 0;
}
