#include <stdio.h>

int main(void)
{
    int num = 0;;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("%p %p %p \n",&num, ptr, *dptr);//ptr은 *num의 주소값을 저장하고 있다.
    printf(" %d %d %d \n",num, *ptr, **dptr);

    return 0;

}