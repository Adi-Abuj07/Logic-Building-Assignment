#include <stdio.h>
int CountDiff(int iNo)
{
  int iDigit = 0;
  int iEven = 0;
  int iOdd = 0;
  int iDiff = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit % 2 == 0)
    {
      iEven = iEven + iDigit;
    }
    else
    {
      iOdd = iOdd + iDigit;
    }
    iNo = iNo / 10;
  }
  iDiff = iEven - iOdd;
  return iDiff;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number:");
  scanf("%d", &iValue);

  iRet = CountDiff(iValue);

  printf("Differeance is:%d", iRet);

  return 0;
}