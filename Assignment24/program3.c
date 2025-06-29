///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   frequency diffreance between small and capital
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int CountCapital(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
        }
        str++;
    }
    return (iCount1 - iCount2);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Diffreance between small and capital frequency:%d", iRet);

    return 0;
}

/*
output :

Enter the String:Aditya Abuj
Diffreance between small and capital frequency:6

Enter the String:MarveLLouse
Diffreance between small and capital frequency:5

*/