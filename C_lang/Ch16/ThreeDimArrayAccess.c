#include <stdio.h>

int main(void)
{
    int mean=0, i, j;
    int reecord[3][3][2]={
        {
            {70, 80},
            {94, 90},
            {70, 85}
        },
        {
            {83, 90},
            {95, 60},
            {90, 82}
        },
        {
            {98, 89},
            {99, 94},
            {91, 87},
        }
    };

    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            mean += reecord[0][i][j];
        }
    }
    printf("A �б� ��ü ��� : %g \n", (double)mean/6);
    mean=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            mean += reecord[1][i][j];
        }
    }
    printf("B �б� ��ü ��� : %g \n", (double)mean/6);
    mean=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            mean += reecord[2][i][j];
        }
    }
    printf("C �б� ��ü ��� : %g \n", (double)mean/6);
    return 0;
}