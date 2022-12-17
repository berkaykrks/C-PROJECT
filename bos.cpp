#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int *ptr;
    int count;

    ptr = &arr[0]; // ptr points to arr[0]

    count = 0;

    printf("Accessing array elements using pointer \n");
    while(count < SIZE)
    {
        printf("arr[%d] = %d \n", count, *(ptr + count));

        count++;
    }

    return 0;
}
