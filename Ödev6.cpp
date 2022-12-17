#include <stdio.h>

int main(){
	float yariCap, cap, cevre, alan;
	
	const float PI=3.14; 
	
	printf("Dairenin yari Capini Giriniz: ");
	scanf("%f",&yariCap);
	
	cap=yariCap*2;
	cevre=2*PI*yariCap;
	alan=PI*(yariCap*yariCap);
	
	printf("Dairenin Capi: %f\n",cap);
	printf("Dairenin Cevresi: %f\n",cevre);	
	printf("Dairenin Alan: %f",alan);
	
	return 0;
	
}
