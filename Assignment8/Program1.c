#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
   double iArea=0.0f;
   if (fRadius<0)
   {
      fRadius=-fRadius;
   }

   iArea=PI*fRadius*fRadius;
   
   return iArea;
}
int main()
{
    float fValue=0.0f;
    double dRet=0.0f;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of Circle is %.4f\n",dRet);
}