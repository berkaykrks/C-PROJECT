#include <stdio.h>
#include <math.h>

int main(){
	int i,say,sonB,bas,top,son;
	
	printf("Son sayiyi giriniz: ");
	scanf("%d", &son);
	
	for(i=1;i<=son;i++){
		
		say=i;
		top=0;
		sonB=say%10;
		bas=(int)log10(say)+1;
		
		while(say>0)
		{
			sonB=say%10;
			top=top+ceil(pow(sonB,bas));
			say/=10;
			
		}
		
		
		if(i==top)
		{
			printf("%d, ",i);
		}
		
	}
	return 0;
	
}
