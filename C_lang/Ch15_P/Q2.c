#include <stdio.h>

int main(void)
{
    int num,i=0;
    int count = 0;

    printf("10진수 정수 입력 : ");
    scanf("%d", &num);
    
    for(i=num;i!=0;i/=2)
        count++;

    int arr[count];

    for(i=0; i<count; i++)
    {
        arr[i] = num%2;
        num = num/2;
    }
    for(i=count; i>0;i--)
        printf("%d",arr[i-1]);
    
    return 0;
}