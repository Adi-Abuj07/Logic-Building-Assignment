#include <stdio.h>

int Miinmum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0, iMax = 0, iRes = 0;
    if ((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid Input");
        return -1;
    }

    iMin = Arr[0];
    iMax = Arr[0];
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    iRes = iMax - iMin;
    return iRes;
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

    printf("\nDifference is :%d", iRet);

    free(ptr);

    return 0;
}

/*

output :

Enter the number of elements

5
Enter 5 elements one by one
Enter the 1 element:43
Enter the 2 element:34
Enter the 3 element:67
Enter the 4 element:1
Enter the 5 element:64

Smallest Number is :66

*/