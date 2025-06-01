#include <stdio.h>

int Frequency(int Arr[], int iLength)
{

   int icnt = 0, iRes = 0;
   int Evencount = 0, Oddcount = 0;

   if ((Arr == NULL) || (iLength <= 0))
   {
      printf("Invalid Input");
      return -1;
   }

   for (icnt = 0; icnt < iLength; icnt++)
   {
      if ((Arr[icnt] % 2 == 0))
      {
         Evencount++;
      }
      else
      {
         Oddcount++;
      }
   }
   iRes = Evencount - Oddcount;
   if (iRes < 0)
   {
      iRes = -iRes;
   }
   return iRes;
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

   iRes = Frequency(ptr, iSize);

   printf("Diffrence between frequency of even and odd:%d", iRes);

   free(ptr);

   return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:45
Enter 2 the element:34
Enter 3 the element:65
Enter 4 the element:87
Enter 5 the element:59
Diffrence between frequency of even and odd:3

*/