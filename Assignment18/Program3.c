#include <stdio.h>

void FindMinimum(int Arr[], int iLength)
{

    int icnt = 0;
    int iMin = 0;
    // iMin=Arr[0];  //Then Arr[0] is invalid access — you're reading from memory that doesn't belong to the array.

    if ((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid Input");
        return -1;
    }

    iMin = Arr[0];
    for (icnt = 0; icnt < iLength; icnt++)
    {
        if (Arr[icnt] < iMin)
        {
            iMin = Arr[icnt];
        }
    }
    printf("smallest element is:%d", iMin);
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    FindMinimum(ptr, iSize);

    free(ptr);

    return 0;
}

/*

Enter the no.of element:5
Enter the elements:
Enter 1 the element:67
Enter 2 the element:84
Enter 3 the element:23
Enter 4 the element:56
Enter 5 the element:22

smallest element is:22

*/