#include <stdio.h>

void MultipleOfEleven(int Arr[], int iLength)
{

   int icnt = 0;

   if ((Arr == NULL) || (iLength <= 0))
   {
      printf("Invalid Input");
      return -1;
   }

   for (icnt = 0; icnt < iLength; icnt++)
   {
      if ((Arr[icnt] % 11 == 0))
      {
         printf("%d\t", Arr[icnt]);
      }
   }
}

int main()
{
   int iSize = 0, iCnt = 0;
   int *ptr = NULL;

   printf("Enter the no.of element:");
   scanf("%d", &iSize);

   ptr = (int *)malloc(iSize * sizeof(int));

   if (ptr == NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }

   printf("Enter the elements\n:");

   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("Enter %d the element:", iCnt + 1);
      scanf("%d", &ptr[iCnt]);
   }

   MultipleOfEleven(ptr, iSize);

   free(ptr);

   return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:55
Enter 2 the element:47
Enter 3 the element:56
Enter 4 the element:88
Enter 5 the element:56

55      88

*/