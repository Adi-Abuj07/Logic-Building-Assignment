#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{

   int icnt = 0;
   BOOL Flag = FALSE;

   if ((Arr == NULL) || (iLength <= 0))
   {
      printf("Invalid Input");
      return -1;
   }

   for (icnt = 0; icnt < iLength; icnt++)
   {
      if ((Arr[icnt] == 11))
      {
         Flag = TRUE;
      }
   }
   return Flag;
}

int main()
{
   int iSize = 0, iCnt = 0;
   BOOL bRes = FALSE;
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

   bRes = Check(ptr, iSize);

   if (bRes == TRUE)
   {
      printf("11 is present ");
   }
   else
   {
      ("11 is absent");
   }

   free(ptr);

   return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:434
Enter 2 the element:1221
Enter 3 the element:34
Enter 4 the element:11
Enter 5 the element:23

11 is present

*/