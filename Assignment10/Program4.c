#include <stdio.h>
int MulDigits(int iNo)
{
   int iDigit = 0;
   int iMul = 1;

   if (iNo < 0)
   {
      iNo = -iNo;
   }
   while (iNo != 0)
   {
      iDigit = iNo % 10;
      if (iDigit != 0)
      {
         iMul = iMul * iDigit;
      }
      iNo = iNo / 10;
   }
   return iMul;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number:");
   scanf("%d", &iValue);

   iRet = MulDigits(iValue);

   printf("Multiplication of digits is:%d", iRet);

   return 0;
}