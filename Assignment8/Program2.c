#include<stdio.h>
#define ERR_INVALID -1

double RectArea(float fWidth,float fHight)
{
    if (fWidth<0||fHight<0)
   {
      return ERR_INVALID;
   }
    double iArea=0.0f;
    iArea=fWidth*fHight;
    return iArea;
}
int main()
{
    float fValue1=0.0f,fValue2=0.0f;
    double dRet=0.0f;

    printf("Enter Width:");
    scanf("%f",&fValue1);

    printf("Enter Hight:");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Area of Circle is %.4f\n",dRet);
}