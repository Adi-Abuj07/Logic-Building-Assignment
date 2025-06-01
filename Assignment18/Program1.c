#include <stdio.h>

int Difference(int Arr[], int iLength)
{

    int icnt = 0;
    int iEven = 0;
    int iOdd = 0;
    int iRes = 0;

    if ((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid Input");
        return -1;
    }

    for (icnt = 0; icnt < iLength; icnt++)
    {
        if (Arr[icnt] % 2 == 0)
        {
            iEven = iEven + Arr[icnt];
        }
        else
        {
            iOdd = iOdd + Arr[icnt];
        }
    }
    iRes = iEven - iOdd;
    return iRes;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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
    iRet = Difference(ptr, iSize);

    printf("Result is:%d", iRet);

    free(ptr);

    return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:43
Enter 2 the element:54
Enter 3 the element:87
Enter 4 the element:44
Enter 5 the element:45
Result is:-77

*/