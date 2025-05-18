#include<stdio.h>
int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    int iEvenMul=1;
    int iOddMul=1;
    int iDiff=0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        if((icnt%2)==0)
        {
          iEvenMul=iEvenMul*icnt;   
        }
        else
        {
           iOddMul=iOddMul*icnt;   
        }
    }
    iDiff=iEvenMul-iOddMul;
    return iDiff;
}
int  main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter the Number:");
   scanf("%d",&iValue);

   iRet=FactorialDiff(iValue);

   printf("Factorial Difference is %d",iRet);

   return 0;
}