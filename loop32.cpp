
int bolme (int a,int b);
int topla (int a,int b);
int cikarma (int a,int b);
int carpma (int a,int b);

#include <stdio.h>

int main()
{
	char sec;
	long a,b,top;
	printf("iki adet sayi gir: ");
	scanf("%ld%ld",&a,&b);
	
	printf("bir harf seciniz: [t-c-p-b]");
	scanf("%c",&sec);
	if(sec=='t')
	{
		top = topla(a+b);
		printf("top%ld",top);
	}
	
	
}

int topla (int a,int b)
{
	int toplam;
	toplam=a+b;
	
	return toplam;
}
int cikarma (int a,int b)
{
	int cikarma;
	cikarma=a-b;
	
	return cikarma;
}
int carpma (int a,int b)
{
	int carpma;
	carpma=a*b;
	
	return carpma;
}
int bolme (int a,int b)
{
	int bolme;
	bolme=a/b;
	
	return bolme;
}
