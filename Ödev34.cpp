#include <stdio.h>

int main() {
	
	int yil;
	
	printf("Herhangi Bir Yil Giriniz: ");
	scanf("%d",&yil);
	
	
printf("%s", ((yil%4==0 && yil%100!=0) ? 
                    "Artik yil" : (yil%400 ==0 ) ? 
                        "Artik Yil" : "Ortak yil"));
		
	return 0;
	
	
}
