#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0, };
    int i,j;

    printf("a \n");
    //점수 작성 반복문
    for(i=0; i<4; i++)
    {
        for (j=0 ; j < 4; j++)
        {
            printf("입력 : ");
            scanf("%d ", &arr[i][j]);
        }
        printf("\n");
        
    }
    printf("b \n");
    //점수 합산 반복문
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
    //결과확인 반복문
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