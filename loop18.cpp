#include <stdio.h>

int main()
{
	int i,say1,say2,max,ebk=1;
	
	printf("2 ADET SAYI GIRINIZ: ");
	scanf("%d%d",&say1,&say2);
	
	max= (say1>say2)?say1:say2;
	i=max;
	
	while(1)
	{
		if(i%say1==0 && i%say2==0)
		{
			ebk=i;
			break;
		}
		i+=max;
	}
	
	
	printf("%d ve %d En buyuk katlari = %d",say1,say2,ebk);
	return 0;
	
}
