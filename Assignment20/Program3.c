#include <stdio.h>

int LastOcc(int Arr[], int iSize, int iSearch)
{
    int iCnt = 0;
    if ((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid Input");
        return -1;
    }

    for (iCnt = iSize; iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == iSearch)
        {
            break;
        }
    }
    if (iCnt >= 0)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iSearch = 0;
    int iRes = 0;
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

    iRes = LastOcc(ptr, iSize, iSearch);

    if (iRes == -1)
    {
        printf("\nElement is not found %d", iRes);
    }
    else
    {
        printf("\nlast index of element is::%d", iRes);
    }

    free(ptr);

    return 0;
}

/*

output


Enter the number of elements:
5
Enter the elements one by one:
Enter the 1 element:7
Enter the 2 element:7
Enter the 3 element:7
Enter the 4 element:7
Enter the 5 element:7

Enter the element you searching for:7

last index of element is::4

*/