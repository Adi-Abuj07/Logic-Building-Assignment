///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Count the small characters from the string
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int CountCapital(char *str)
{
    int iCount = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("No.of Capital Characters are:%d", iRet);

    return 0;
}

/*
output :

Enter the String:Aditya Abuj
No.of Capital Characters are:8

Enter the String:Marvellouse
No.of Capital Characters are:10

*/