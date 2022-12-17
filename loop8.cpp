#include <stdio.h>
#include <math.h>


int main(){
	int sonB,ilkB,say,bas;
	int sonSayi;
	
	printf("Sayi giriniz = ");
	scanf("%d",&say);
	
	sonB=say%10;
	
	bas=(int)log10(say);
	
	ilkB=(int)(say/pow(10,bas));
	
	sonSayi= sonB;
	sonSayi*=(int)pow(10,bas);
	sonSayi+=say%((int)pow(10, bas));
	sonSayi-=sonB;
	sonSayi+=ilkB;
	
	printf("ÝLK GÝRÝLEN = %d\n",say);
	printf("Degistirildikten sonra girilen sayi: %d\n",sonSayi);
	
	return 0;
	
	
}
