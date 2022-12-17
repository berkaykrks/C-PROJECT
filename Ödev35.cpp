#include <stdio.h>

int main(){
	
	char karak,son;
	
	printf("Herhangi Bir Karakter Giriniz: ");
	scanf("%c",&karak);
	
    (karak>='a' && karak <='z')||(karak>='A' && karak<='Z')? printf("DOGRU GIRILDI"): printf("YANLIS GIRILDI");
	
	
	
	return 0;
	
}
