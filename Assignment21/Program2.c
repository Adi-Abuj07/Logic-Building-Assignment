///////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Used to find the smallest number
//  Author :        Aditya Abuj
//  Date :          24/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int Miinmum(int Arr[], int iLength)
{
   int iCnt = 0, iMin = 0;
   if ((Arr == NULL) || (iLength <= 0))
   {
      printf("Invalid Input");
      return -1;
   }

   iMin = Arr[0];
   for (iCnt = 0; iCnt < iLength; iCnt++)
   {
      if (Arr[iCnt] < iMin)
      {
         iMin = Arr[iCnt];
      }
   }
   return iMin;
}

int main()
{
   int iSize = 0, iCnt = 0, iRet = 0;
   int *ptr = NULL;

   printf("Enter the number of elements\n");
   scanf("%d", &iSize);

   ptr = (int *)malloc(iSize * sizeof(int));
   if (ptr == NULL)
   {
      printf("Unable to allocate the memory");
      return -1;
   }

   printf("Enter %d elements one by one\n", iSize);
   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("Enter the %d element:", iCnt + 1);
      scanf("%d", &ptr[iCnt]);
   }

   iRet = Miinmum(ptr, iSize);

   printf("\nSmallest Number is :%d", iRet);

   free(ptr);

   return 0;
}

/*

output :

Enter the number of elements
6
Enter 6 elements one by one
Enter the 1 element:85
Enter the 2 element:66
Enter the 3 element:3
Enter the 4 element:66
Enter the 5 element:93
Enter the 6 element:88

Smallest Number is :3

*/