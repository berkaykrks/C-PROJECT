#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    srand(time(NULL));
    int a, b;
    printf("Dizinin Boyutunu Giriniz: ");
    scanf(" %i", &a);
    int c[a];
    for(b=0; b<a; b++)
        c[b] = b;
    for(b=0; b<a; b++) {
        int d = c[b];
        int e = rand()%a;
        c[b] = c[e];
        c[e] = d;
    }
    int say;
    for(b=0; b<a; b++){
    	/*printf("%i\n", c[b]);*/
    	say = c[b];
    	switch(say){
    	case 0:
    		printf("Mert Turkoz\n");
    		break;
    	case 1:
    		printf("Mert Korkmaz\n");
    		break;
    	case 2:
    		printf("Furkan Ezer\n");
    		break;
    	case 3:
    		printf("Omer Faruk\n");
    		break;
    	case 4:
    		printf("Efe Sivrikaya\n");
    		break;
    	case 5:
    		printf("Ferhat\n");
    		break;
    	case 6:
    		printf("Furkan Tayfun\n");
    		break;
    	case 7:
    		printf("Kerem Sandalcýlar\n");
    		break;
    	case 8:
    		printf("Renas\n");
    		break;
    	case 9:
    		printf("Gokdeniz\n");
    		break;
    	case 10:
    		printf("Burak\n");
    		break;
    	case 11:
    		printf("Emirhan\n");
    		break;
    	case 12:
    		printf("Atahan\n");
    		break;
    	case 13:
    		printf("Berkay\n");
    		break;
    	default: 
    		printf("Girilen Deger yok %d\n",say );
    		
	}
        
        
    
	}
    
    return 0;
}
