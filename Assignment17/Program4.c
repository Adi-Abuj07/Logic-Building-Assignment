/*

1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5

*/
#include<stdio.h>
void Pattern(int iRows,int iCols)
{
    int i=0,j=0;

    for(i=1;i<=iRows;i++)
    {
        for(j=1;j<=iCols;j++)
        {
           if(i==1|| i==iRows)
           {
            printf("%d\t",j);
           }
           else if(j==1 || j==iCols)
           {
            printf("%d\t",j);
           }
           else if(i==j)
           {
            printf("%d\t",i);
           }
           else
           {
            printf(" \t");
           }
        }
       printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Rows:");
    scanf("%d",&iValue1);

    printf("Enter Columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}