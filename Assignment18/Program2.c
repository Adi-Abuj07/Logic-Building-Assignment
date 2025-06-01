#include <stdio.h>

void DivisibleByFive(int Arr[], int iLength)
{

   int icnt = 0;

   if ((Arr == NULL) || (iLength <= 0))
   {
      printf("Invalid Input");
      return -1;
   }

   for (icnt = 0; icnt < iLength; icnt++)
   {
      if (Arr[icnt] % 5 == 0)
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

   printf("Enter the elements:\n");

   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("Enter %d the element:", iCnt + 1);
      scanf("%d", &ptr[iCnt]);
   }

   DivisibleByFive(ptr, iSize);

   free(ptr);

   return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:45
Enter 2 the element:64
Enter 3 the element:67
Enter 4 the element:22
Enter 5 the element:45
45      45

*/