#include <stdio.h>

void printNaturalNumber(int altLimit, int ustLimit);
int main(){
	
	int altLimit,ustLimit;
	
	printf("alt limit gir : ");
	scanf("%d",&altLimit);
	printf("ust limit gir: ");
	scanf("%d",&ustLimit);
	
	printNaturalNumber(altLimit,ustLimit);
	
}

void printNaturalNumber(int altLimit, int ustLimit){
	
	if(altLimit>ustLimit)
		return;
	
	printf("%d\n",altLimit);
	printNaturalNumber(altLimit+1,ustLimit);
}
