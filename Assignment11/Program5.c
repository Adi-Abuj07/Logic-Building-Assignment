#include <stdio.h>
void Pattern(int iNo)
{
  int icnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (icnt = 1; icnt <= (iNo * 2); icnt++)
  {
    if (icnt % 2 == 0)
    {
      printf("%d\t", icnt);
    }
  }
}
int main()
{
  int iValue = 0;

  printf("Enter number of Elements:");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}

/*
output :-

2       4       6       8       10      12      14      16

*/