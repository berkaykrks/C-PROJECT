#include <stdio.h>
#define MAX_SIZE 100

void printArray(int arr[],int start,int len);
int main(){
	
	int size,i;
	int arr[MAX_SIZE];
	
	printf("dizi uzunlugunu gir: ");
	scanf("%d",&size);
	
	printf("dizi degerlerini gir: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("dizinin elemanlari: ");
	printArray(arr,0,size);
	
	return 0;
}

void printArray(int arr[],int start,int len)
{
	if(start>=len)
		return;
		
	printf("%d, ",arr[start]);
	
	printArray(arr,start+1,len);
	
}
