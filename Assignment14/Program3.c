#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;
    char ch = "\0";

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, iCnt = 1, ch = 'a'; j <= iCol; j++, iCnt++, ch++)
        {
            if ((i % 2) != 0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%d\t", iCnt);
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

a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e

*/