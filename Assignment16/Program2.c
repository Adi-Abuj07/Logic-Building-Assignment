/*

*       *       *       *
*       *       *
*       *
*

*/
#include<stdio.h>
void Pattern(int iRows)
{
    int i=0,j=0;

    for(i=iRows;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
           printf("*\t");
        }
       printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Value:");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return 0;

}