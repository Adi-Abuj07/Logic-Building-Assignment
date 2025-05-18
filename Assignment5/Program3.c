#include<stdio.h>
void RangePrint(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=-iNo;icnt<=iNo;icnt++)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    RangePrint(iValue);

    return 0;
}