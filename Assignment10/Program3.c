#include <stdio.h>
int CountRange(int iNo)
{
   int iDigit = 0;
   int iCount = 0;

   if (iNo < 0)
   {
      iNo = -iNo;
   }
   while (iNo != 0)
   {
      iDigit = iNo % 10;
      if ((iDigit >= 3) && (iDigit <= 7))
      {
         iCount++;
      }
      iNo = iNo / 10;
   }
   return iCount;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number:");
   scanf("%d", &iValue);

   iRet = CountRange(iValue);

   printf("There are %d digit's in range 3 to 6 given Value", iRet);

   return 0;
}