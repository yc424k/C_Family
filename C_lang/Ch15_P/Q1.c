#include <stdio.h>

void OddNumber(int *);
void EvenNumber(int *);

int main(void)
{
    int arr[10];
    int i;
    printf("총 10개의 숫자 입력 \n");

    for(i=0; i<10; i++)
    {
        printf("입력 : ");
        scanf("%d",(arr+i));

    }
    OddNumber(arr);
    EvenNumber(arr);

    return 0;
}

void OddNumber(int *a)
{
    int i;
    for(i=0; i<10; i++)
    {
        if(a[i]%2 == 1)
            printf("%d ",a[i]);
    }
    printf("\n");
}
void EvenNumber(int *a)
{
    int i;
    for(i=0; i<10; i++)
    {
        if(a[i]%2 == 0)
            printf("%d ",a[i]);
    }
    printf("\n");
}
