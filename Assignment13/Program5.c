#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++, iCnt++)
        {
            printf("%d\t", iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Rows and Columns:");
    scanf("%d\t%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/*
output :-

1       2       3       4
5       6       7       8
9       10      11      12

*/