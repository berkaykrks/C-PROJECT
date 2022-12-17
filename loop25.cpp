#include <stdio.h>
#include <string.h>

int main(){
	int hexConstant[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1110,1101,1111};
	long long ikili,copyIkili;
	char hex[20];
	int index,i,bas;
	
	printf("Ikili sisteme gore deger gir: ");
	scanf("%lld",&ikili);
	ikili=copyIkili;
	index=0;
	
	while(copyIkili!=0)
	{
		bas=copyIkili%10000;
		
		for(i=0;i<16;i++)
		{
			if(hexConstant[i]==bas)
			{
				if(i<10){
					hex[index]=(char)(i+48);
				}
				else
				{
					hex[index]=(char)((i-10)+65);
 				}
 				
 				index++;
 				break;
			}
		}
		
		copyIkili/=10000;
	}
	hex[index]='\0';
	
	strrev(hex);
	
	printf("Ýkili numara =%lld \n",ikili);
	printf("hexadeci numara= %s",hex);
	
	return 0;
	
}
