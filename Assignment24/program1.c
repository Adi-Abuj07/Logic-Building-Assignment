///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Count the capital characters from the string
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
        if ((*str >= 'A') && (*str <= 'Z'))
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
No.of Capital Characters are:2

Enter the String:MARvelloUse
No.of Capital Characters are:4

*/