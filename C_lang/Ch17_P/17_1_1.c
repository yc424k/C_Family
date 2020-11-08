#include <stdio.h>

void MAXMINCheck(int *, int **, int **, int);

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5];
    int i;

    for(i=0; i<5; i++)
    {
        scanf("%d ", &arr[i]);
    }
    MAXMINCheck(arr, &maxPtr, &minPtr, sizeof(arr)/sizeof(int));
    printf("MAX : %d, MIN : %d \n", *maxPtr, *minPtr);
    return 0;
}

void MAXMINCheck(int *arr, int **dptr1, int **dptr2, int len)
{
    int i;
    **dptr1 = **dptr2 = *arr;
    for(i=0; i<len-1; i++)
    {
        if(arr[i] < arr[i+1])
            **dptr1 = arr[i+1];
        if(arr[i] > arr[i+1])
            **dptr2 = arr[i+1];
    }
}