#include <stdio.h>

int main(void)
{
    int num = 0;;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("%p %p %p \n",&num, ptr, *dptr);//ptr�� *num�� �ּҰ��� �����ϰ� �ִ�.
    printf(" %d %d %d \n",num, *ptr, **dptr);

    return 0;

}