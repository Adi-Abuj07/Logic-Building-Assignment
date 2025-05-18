#include<stdio.h>
int FactorSum(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    int iSum=0;
    for(icnt=1;icnt<iNo;icnt++)
    {
        if(iNo%icnt!=0)
        {
            iSum=iSum+icnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=FactorSum(iValue);

    printf("%d",iRet);

    return 0;
}