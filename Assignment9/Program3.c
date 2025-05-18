#include<stdio.h>
int TwoCount(int iNo)
{
   int iDigit=0;
   int iCount=0;

   if(iNo<0)
   {
    iNo=-iNo;
   }
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if(iDigit==2)
      {
        iCount++;
      }
      iNo=iNo/10;
   }
   return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=TwoCount(iValue);
     
    printf("There are %d Tow's in given Value",iRet);

    return 0;
}