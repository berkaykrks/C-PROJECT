#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	float islem1,islem2,imge;
	float disk;
	
	printf("3 ADET DEGER GIRINIZ (aX2+bX+c): ");
	scanf("%f%f%f",&a,&b,&c);
	
	disk= b*b -(4*a*c);
	
	if(disk>0)
	{
		islem1=(-b +sqrt(disk)/(2*a));
		islem2=(-b-sqrt(disk)/(2*a));
		
		printf("2 farklý ve gercek kok var: %f ve %f",islem1,islem2);
		
	}
	else if(disk==0)
	{
		islem1= islem2= -b /(2*a);
		
		printf("2 Esit ve gercek kok var: %f ve %f",islem1,islem2);
	}
	else if(disk<0)
	{
		islem1=islem2=-b/(2*a);
		imge=sqrt(-disk)/(2*a);
		
		printf("Iki farkli karmasik kok var %f +%f ve %f - %f",islem1,imge, islem2,imge);
	 } 
	
	return 0;
	
}

