#include <stdio.h>

int main(){
	int yil,gun,hafta;
	
	printf("G�n Sayisi Giriniz: ");
	scanf("%d",&gun);
	
	yil=gun/365;
	hafta=(gun%365)/7;
	gun=gun-((yil*365)+(hafta*7));
	
	printf("yil: %d\n",yil);
	printf("hafta: %d\n",hafta);
	printf("gun: %d",gun);
	
	return 0;
}
