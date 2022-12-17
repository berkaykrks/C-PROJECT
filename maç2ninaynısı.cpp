#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main (){
	srand(time(NULL));
	int a, b;
	
	printf("Dizinin Uzunlugunu Giriniz: ");
	scanf("%d",&a);
	int c[a];	
	for(b=0; b<a;b++)
		c[b]=b;
	for(b=0;b<a;b++){
		int d= c[b];
		int e=rand()%a;
		c[b]=c[e];
		c[e]=d;		
	}
	for(b=0; b<a;b++)
	{
		printf("%d\n",c[b]);
		
	}
	
	return 0;

	
	
}
