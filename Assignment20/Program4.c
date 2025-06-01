#include <stdio.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
  int iCnt = 0;
  if ((Arr == NULL) || (iLength <= 0))
  {
    printf("Invalid Input");
    return -1;
  }

  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    if ((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
    {
      printf("%d\t", Arr[iCnt]);
    }
  }
}

int main()
{
  int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
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

  printf("\nEnter the starting index:");
  scanf("%d", &iStart);

  printf("\nEnter the ending index:");
  scanf("%d", &iEnd);

  Range(ptr, iSize, iStart, iEnd);

  free(ptr);

  return 0;
}

/*

output


Enter the number of elements:
5
Enter the elements one by one:
Enter the 1 element:7
Enter the 2 element:7
Enter the 3 element:7
Enter the 4 element:7
Enter the 5 element:7

Enter the element you searching for:7

last index of element is::4

*/