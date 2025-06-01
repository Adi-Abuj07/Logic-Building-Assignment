#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, iCnt = 1; j <= (iCol * 2) + 2; j++, iCnt++)
        {
            if ((i % 2) != 0)
            {
                if ((iCnt % 2) == 0)
                {
                    printf("%d\t", iCnt);
                }
            }
            else
            {
                if ((iCnt % 2) != 0)
                {
                    printf("%d\t", iCnt);
                }
            }
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

2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9

*/