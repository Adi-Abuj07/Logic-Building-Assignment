#include <stdio.h>

int Product(int Arr[], int iSize)
{
  int iCnt = 0, iMul = 1;
  if ((Arr == NULL) || (iLength <= 0))
  {
    printf("Invalid Input");
    return -1;
  }

  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    if ((Arr[iCnt] % 2 != 0))
    {
      iMul = iMul * Arr[iCnt];
    }
  }
  return iMul;
}

int main()
{
  int iSize = 0, iCnt = 0, iRes = 0;
  int *ptr = NULL;

  printf("Enter the number of elements:\n");
  scanf("%d", &iSize);

  ptr = (int *)malloc(iSize * sizeof(int));
  if (ptr == NULL)
  {
    printf("Unable to allocate the memory");
    return -1;
  }

  printf("Enter the elements one by one:\n");
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter the %d element:", iCnt + 1);
    scanf("%d", &ptr[iCnt]);
  }

  iRes = Product(ptr, iSize);

  printf("\nProduct of of all odd elements:%d", iRes);

  free(ptr);

  return 0;
}

/*

Enter the number of elements:
5
Enter the elements one by one:
Enter the 1 element:4
Enter the 2 element:6
Enter the 3 element:7
Enter the 4 element:3
Enter the 5 element:5

Product of of all odd elements:105

*/