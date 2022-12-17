#include <stdio.h>

int main(){
	
	int say,araclar,i=1;
	
	printf("KAC TANE ARABA VAR:");
	scanf("%d",&araclar);
	for(i;i<araclar; i++)
	{
		
	printf("ARABA KAC SAAT PARKTA KALDI : ");
	scanf("%d",&say);
		
		
	if(say<=4)
	{
		printf("%d. ARAC ODENECEK TUTAR 10 TL \n",i);
	}
	else if(say>=5 && say<=8)
	{
		printf("%d. ARAC ODENECEK TUTAR 12 TL \n",i);
	}
	else if(say>=9 && say<=12)
	{
		printf("%d. ARAC ODENECEK TUTAR 15 TL \n",i);
	}
	else if(say>=13)
	{
		printf("%d. ARAC ODENECEK TUTAR 20 TL \n",i);
	}
	else
	{
		printf("araç giriþ süresini yanlýs veya hatalý girdiniz");
	}
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

