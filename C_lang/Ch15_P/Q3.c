#include <stdio.h>

int main(void)
{
    int arr[10];
    int *ptr1 = arr, *ptr2 = arr+9;
    int i,n;

    printf("�� 10���� ���� �Է�\n");
    for(i=0; i<10; i++)
    {
        printf("�Է�: ");
        scanf("%d", &n);
        if(n%2 == 0)
            *(ptr2--) = n;
        else
            *(ptr1++) = n;
    }

    for(i=0; i<10; i++)
        printf("%d, ",arr[i]);

    return 0;

}