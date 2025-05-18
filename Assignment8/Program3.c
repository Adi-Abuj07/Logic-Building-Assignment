#include<stdio.h>
#define METER 1000

int KMtoMeter(int iNo)
{
   int iMeter=0; 
   if (iNo<0)
   {
      iNo=-iNo;
   }

   iMeter=iNo*METER;
   
   return iMeter;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("Distance in Kilometer:%d",iRet);
}