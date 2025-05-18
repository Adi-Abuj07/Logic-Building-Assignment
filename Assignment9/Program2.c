#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkZero(int iNo)
{
   int iDigit=0;
   BOOL bRes=FALSE;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if (iDigit==0)
      {
        bRes=TRUE;
      }
      iNo=iNo/10;
   }
   return bRes;
   
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if (bRet==TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    

    return 0;
}