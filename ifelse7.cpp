#include <stdio.h>

int main(){
	int hafta;
	don:
	printf("1-7 Arasýnda Deger Giriniz: ");
	scanf("%d",&hafta);
	
	if(hafta==1)
		printf("PAZARTESI");
	else if(hafta==2)
		printf("SALI");
	else if(hafta==3)
		printf("CARSAMBA");
	else if(hafta==4)
		printf("PERSEMBE");
	else if(hafta==5)
		printf("CUMA");
	else if(hafta==6)
		printf("CUMARTESI");
	else if (hafta==7)
		printf("PAZAR");
	else
	{
		printf("1-7 ARASINDA DEGER GIRMELISINIZ\n");
		goto don;
	}
	
		return 0;
	
}
