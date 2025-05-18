#include<stdio.h>
int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    int iMul=1;
    for(icnt=1;icnt<=iNo;icnt++)
    {
        if((icnt%2)==0)
        {
          iMul=iMul*icnt;   
        }
    }
    return iMul;
}
int  main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter the Number:");
   scanf("%d",&iValue);

   iRet=EvenFactorial(iValue);

   printf("Even factorial of Number is %d",iRet);

   return 0;
}