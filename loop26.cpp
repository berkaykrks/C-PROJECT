#include <stdio.h>

int main()
{
	int a[30],i,num,enK;
	
	printf("Sayi giriniz:");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	enK=a[0];
	for(i=1;i<num;i++)
	{
		if(a[i]<enK)
		{
			enK=a[i];
		}
	}
	
	printf("EN KUCUK DEGER: %d",enK);
	return 0;
}
