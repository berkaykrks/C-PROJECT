#include <stdio.h>

int main(){
	int say,num,num2,obk=1,min,i;
	
	printf("Iki Adet Sayi Giriniz: ");
	scanf("%d%d",&num,&num2);
	min=(num<num2) ? num :num2;
	
	
	for(i=1; i<=min; i++)
	{
		if(num %i ==0 && num2%i==0)
		{
			obk=i;
		}
	}
	
	printf("%d ve %d Ortak Katlari = %d",num,num2,obk);
	
	return 0;
	
}
