/*

*
*       *
*       *       *
*       *       *       *

*/
#include <stdio.h>
void Pattern(int iNo)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;

    printf("Enter Value:");
    scanf("%d", &iValue1);

    Pattern(iValue1);

    return 0;
}