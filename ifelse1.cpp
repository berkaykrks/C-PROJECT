#include <stdio.h>

int main(){
	int say1,say2;
	
	printf("2 Adet Sayi Giriniz: ");
	scanf("%d%d", &say1,&say2);
	
	if(say1>say2)
		printf("%d EN BUYUK SAYIDIR.",say1);
	else if(say2>say1)
		printf("%d EN BUYUK SAYIDIR",say2);
	else
		printf("Girilen Sayilar Esittir.");
		
	return 0;
	
		

}
