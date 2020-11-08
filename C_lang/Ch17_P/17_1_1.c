#include <stdio.h>

void MAXMINCheck(int *, int **, int **, int);

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5];
    int i;

    printf("입력 시작 \n");
    for(i=0; i<5; i++)
    {
        scanf(" %d", arr+i);
    }
    printf("입력 끝 \n");

    MAXMINCheck(arr, &maxPtr, &minPtr, sizeof(arr)/sizeof(int));
    printf("MAX : %d, MIN : %d \n", *maxPtr, *minPtr);
    return 0;
}

void MAXMINCheck(int *arr, int **dptr1, int **dptr2, int len)
{
    int i;
    int *max, *min;
    max = min = &arr[0];

    for(i=0; i<len; i++)
    {
        if(*max < arr[i])
            max = &arr[i];
        if(*min > arr[i])
            min = &arr[i];
    }
    *dptr1 = max;
    *dptr2 = min;
}