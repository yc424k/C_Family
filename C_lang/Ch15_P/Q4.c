#include <stdio.h>
#include <string.h>

int main(void)
{
    char stringinput[100];
    char *ptr1, *ptr2;
    int i;

    printf("���ڿ� �Է�: ");
    scanf("%s", stringinput);
    ptr1 = stringinput;
    ptr2 = stringinput+(strlen(stringinput))-1;

    for(i=0; i<strlen(stringinput)/2;i++)
    {
        if(*ptr1 == *ptr2)
        {
            ptr1++;
            ptr2--;
        }
        else
        {
            printf("ȸ���� �ƴմϴ�.\n");
            return 0;
        }
        
    }
    printf("ȸ�� �Դϴ�.\n");

    return 0;
}