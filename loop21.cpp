#include <stdio.h>
#include <math.h>

int main(){
	int say,sonB,bas,orj,top;
	
	printf("Sayi giriniz: ");
	scanf("%d",&say);
	orj=say;
	top=0;
	
	bas=(int)log10(say)+1;
	while(say>0)
	{
		sonB= say%10;
		
		top+=round(pow(sonB,bas));
		say/=10;
	}
	if(orj==top)
		printf("GIRILEN SAYI ARMSTRONG SAYIDIR. %d",orj);
	else
		printf("GIRILEN SAYI ARMSTRONG SAYI DEGILDIR. %d",orj);
		
		
	return 0;	
	
}

