
/*

1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4

*/

#include<stdio.h>
void Pattern(int iRows,int iCols)
{
    int i=0,j=0;
    for(i=1;i<=iRows;i++)
    {
        for(j=1;j<=iCols;j++)
        {
            if(i==1 || i==iRows)
            {
                printf("%d\t",j);
            }
            else if(j==1 || j==iCols)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    unsigned int iValue1=0,iValue2=0;

    printf("Enter Rows:");
    scanf("%u",&iValue1);

    printf("Enter Rows:");
    scanf("%u",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}