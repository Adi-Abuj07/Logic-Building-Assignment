#include<stdio.h>
int FactorNonFactorSumDifference(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    int iFactorSum=0;
    int iNonFactorSum=0;
    int iSub=0;
    for(icnt=1;icnt<iNo;icnt++)
    {
        if(iNo%icnt==0)
        {
            iFactorSum=iFactorSum+icnt;
        }
        else
        {
            iNonFactorSum=iNonFactorSum+icnt;
        }
    }
    iSub=iFactorSum-iNonFactorSum;
    return iSub;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=FactorNonFactorSumDifference(iValue);

    printf("%d",iRet);

    return 0;
}