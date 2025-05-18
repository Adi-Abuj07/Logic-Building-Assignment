#include<stdio.h>
#define SqFeet 0.0929

double SquareMeter(int iValue)
{
   double iArea=0.0f;
   if (iValue<0)
   {
     iValue=-iValue;
   }
    iArea=iValue*SqFeet;
    return iArea;
}
int main()
{
    int iValue=0;
    double dRet=0.0f;

    printf("Enter radius:");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("Area in Square Meter is %.4f\n",dRet);
}