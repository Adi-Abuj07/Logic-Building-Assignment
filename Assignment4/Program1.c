#include<stdio.h>
int MulFactors(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    int iMul=1;
    for(icnt=1;icnt<(iNo/2);icnt++)
    {
        if(iNo%icnt==0)
        {
            iMul=iMul*icnt;
        }
    }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=MulFactors(iValue);

    printf("%d",iRet);

    return 0;
}