
#include<stdio.h>
#define ERR_INVALID -1
int CalFactorial(int iNo)
{
    if(iNo==0)
    {
       return ERR_INVALID;
    }
   if(iNo<0)
   {
    iNo=-iNo;
   }
   int icnt=0;
   int iFact=1;
   for (icnt=1;icnt<=iNo; icnt++)
   {
        iFact=iFact*icnt;
   }
   return iFact;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=CalFactorial(iValue);
    
    printf("%d",iRet);

    return 0;
}