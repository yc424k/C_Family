#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0, };
    int i,j;

    printf("a \n");
    //���� �ۼ� �ݺ���
    for(i=0; i<4; i++)
    {
        for (j=0 ; j < 4; j++)
        {
            printf("�Է� : ");
            scanf("%d ", &arr[i][j]);
        }
        printf("\n");
        
    }
    printf("b \n");
    //���� �ջ� �ݺ���
    for(i=0; i<4; i++)
    {
        for (j=0 ; j < 4; j++)
        {
            arr[i][4] += arr[i][j];
            arr[4][i] += arr[i][j];
            arr[4][4] += arr[i][j];
        }   
    }
    printf("c \n");
    //���Ȯ�� �ݺ���
    for(i=0; i<5; i++)
    {
        for (j=0 ; j<5; j++)
        {
            printf("%d ", arr[i][j]);
        }   
        printf("\n");
    }

    return 0;
    

}