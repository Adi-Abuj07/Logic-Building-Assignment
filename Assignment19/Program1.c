#include <stdio.h>

int CountEven(int Arr[], int iLength)
{

   int icnt = 0;
   int icount = 0;

   if ((Arr == NULL) || (iLength <= 0))
   {
      printf("Invalid Input");
      return -1;
   }

   for (icnt = 0; icnt < iLength; icnt++)
   {
      if ((Arr[icnt] % 2 == 0))
      {
         icount++;
      }
   }
   return icount;
}

int main()
{
   int iSize = 0, iCnt = 0, iRes = 0;
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

   iRes = CountEven(ptr, iSize);

   printf("Even number count is:%d", iRes);

   free(ptr);

   return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:43
Enter 2 the element:55
Enter 3 the element:64
Enter 4 the element:88
Enter 5 the element:44
Even number count is:3

*/