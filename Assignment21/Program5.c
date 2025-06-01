#include <stdio.h>

void Digit(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0;
    if ((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid Input");
        return -1;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        int icount = 0, isum = 0, iDigit = 0;
        int num = Arr[iCnt];
        while (num != 0)
        {
            iDigit = num % 10;
            isum = isum + iDigit;
            num = num / 10;
        }
        printf("%d\t", isum);
    }
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

    Digit(ptr, iSize);

    free(ptr);

    return 0;
}

/*

output :

Enter the number of elements
5
Enter 5 elements one by one
Enter the 1 element:
4647
Enter the 2 element:7676
Enter the 3 element:9876
Enter the 4 element:2334
Enter the 5 element:9865
21      26      30      12      28

*/