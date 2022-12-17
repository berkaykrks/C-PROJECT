#include <stdio.h>

int main(){
	int say,sonNum;
	
	printf("Sayi giriniz: ");
	scanf("%d ",&say);
	
	sonNum=say%10;
	printf("son basamak :%d",sonNum);
	int ilkNum();
	

}


 int ilkNum(){
	int say,ilkNum;
	
	printf("Deger giriniz: ");
	scanf("%d",&say);
	
	ilkNum=say;
	while(ilkNum>=10)
	{
		ilkNum=ilkNum/10;
	}
	
	printf("Ýlk Basamak: %d",ilkNum);
	
}

