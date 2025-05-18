#include<stdio.h>

double FhToCs(float fTemp)
{
   
   if (fTemp<0)
   {
      fTemp=-fTemp;
   }
   double iCelsius=0.0f;

   iCelsius=((fTemp-32)*(5.0/9.0));
  
   return iCelsius;

}
int main()
{
    float fValue=0.0f;
    double dRet=0.0f;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet=FhToCs(fValue);

    printf("Temperature in Celsius %.4f\n",dRet);
}