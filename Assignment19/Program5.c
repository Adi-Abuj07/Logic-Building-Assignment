#include <stdio.h>

int Frequency(int Arr[], int iLength, int iSearch)
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
        if ((Arr[icnt] == iSearch))
        {
            icount++;
        }
    }
    return icount;
}

int main()
{
    int iSize = 0, iCnt = 0, iSearch = 0;
    int iRes = 0;
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

    printf("Enter the number your searching for:");
    scanf("%d", &iSearch);

    iRes = Frequency(ptr, iSize, iSearch);

    printf("\nfrequency of Number %d is %d", iSearch, iRes);

    free(ptr);

    return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:44
Enter 2 the element:55
Enter 3 the element:23
Enter 4 the element:76
Enter 5 the element:55

Enter the number your searching for:55

frequency of 55 is 2

*/