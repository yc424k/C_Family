#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int *);

int main(void)
{
    int num = 2;

    printf("Call-by-Value : %d \n", SquareByValue(2));
    SquareByReference(&num);
    printf("Call-by-Reference : %d \n", num);

    return 0;
}

int SquareByValue(int x)
{
    return x * x;
}

void SquareByReference(int *x)
{
    *x = *x * *x;
}