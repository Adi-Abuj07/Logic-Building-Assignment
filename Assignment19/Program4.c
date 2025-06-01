#include <stdio.h>

int Frequency(int Arr[], int iLength)
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
        if ((Arr[icnt] == 11))
        {
            icount++;
        }
    }
    return icount;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int bRes = 0;
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

    bRes = Frequency(ptr, iSize);

    printf("frequency of 11 is %d", bRes);

    free(ptr);

    return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:11
Enter 2 the element:22
Enter 3 the element:65
Enter 4 the element:423
Enter 5 the element:1

frequency of 11 is 1

*/