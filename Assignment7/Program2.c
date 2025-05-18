#include<stdio.h>
#define ERR_INVALID -1
int DollerToINR(int iNo)
{
   if (iNo<0)
   {
     return ERR_INVALID;
   }
    int iRs=0; 
    return iRs=iNo*70;  
}
int  main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter number od USD:");
   scanf("%d",&iValue);

   iRet=DollerToINR(iValue);

   printf("Value in INR is %d",iRet);

   return 0;
}