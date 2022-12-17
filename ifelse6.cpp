#include <stdio.h>

int main (){
	char ch;
	
	printf("Herhangi bir karakter giriniz: ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' ||ch=='o'||ch=='u'||
	ch=='A' ||ch=='E' ||ch=='I' ||ch=='O'||ch=='U')
	{
		printf("%c Unlu bir karakterdir. ",ch);
		
	}
	else if((ch>='a'&&ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf ("%c Unsuz bir karakterdir. ",ch);
	}
	else
		printf("Girilen deger karakter degildir. ");
		
	return 0;
	

	
}
