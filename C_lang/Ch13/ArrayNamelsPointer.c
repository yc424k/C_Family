//포인터를 배열처럼 배열을 포인터처럼 사용할 수 있다는 걸 알 수 있음
//포인터와 배열은 같다는 걸 알 수 있음
#include <stdio.h>

int main(void)
{
    int arr[3] = {15, 25, 35};

    int *ptr = &arr[0];

    printf("%d %d \n", ptr[0], arr[0]);
    printf("%d %d \n", ptr[1], arr[1]);
    printf("%d %d \n", ptr[2], arr[2]);
    printf("%d %d \n", *ptr, *arr);

    return 0;
}