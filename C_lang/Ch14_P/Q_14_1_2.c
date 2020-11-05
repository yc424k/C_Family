#include <stdio.h>

void Swap3(int *,int *,int *);

int main(void)
{
    int num1 = 2, num2 = 4, num3 = 6;
    
    Swap3(&num1, &num2, &num3);
    printf("%d %d %d \n", num1, num2, num3);

    return 0;
}

void Swap3(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}