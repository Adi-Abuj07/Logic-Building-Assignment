///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.c
//  Descreption :   count the white spaces inside the string
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int CountSpace(char *str)
{
    int iCount=0;

    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if (*str==' ')
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
    int iRet=0;

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    iRet=CountSpace(Arr);

    printf("There are %d Spaces are present inside the String",iRet);

    return 0;
}

/*
output :

Enter the String:marvellouse Info System
There are 2 Spaces are present inside the String

Enter the String:Marvellous 
There are 0 Spaces are present inside the String

*/