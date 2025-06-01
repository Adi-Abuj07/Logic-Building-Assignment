#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iSearch)
{
    int iCnt = 0;
    if ((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid Input");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iSearch)
        {
            break;
        }
    }

    if (iCnt < iSize)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iSearch = 0;
    BOOL bRes = FALSE;
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

    printf("\nEnter the element you searching for:");
    scanf("%d", &iSearch);

    bRes = Check(ptr, iSize, iSearch);

    if (bRes == TRUE)
    {
        printf("\nTRUE %d is Present", iSearch);
    }
    else
    {
        printf("\nElement you want to search are not found");
    }

    free(ptr);

    return 0;
}

?
    /*

    output

    Enter the number of elements:
    5
    Enter the elements one by one:
    Enter the 1 element:54
    Enter the 2 element:56
    Enter the 3 element:32
    Enter the 4 element:65
    Enter the 5 element:23

    Enter the element you searching for:23

    TRUE 23 is Present


    */