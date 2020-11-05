#include <stdio.h>

int main(void)
{
    int arr[6] = {1,2,3,4,5,6};
    int *ptr = arr, *ptr1 = arr+5, temp;
    int i;

    for(i=0; i<3; i++)
    {
        temp = *ptr;
        *ptr = *ptr1;
        *ptr1 = temp;
        ptr++; ptr1--; 
    }

    for(i=0; i<6; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;


}