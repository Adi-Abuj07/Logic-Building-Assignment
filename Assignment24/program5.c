///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.c
//  Descreption :   accept the string and display it in reverse order
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Reverse(char *str)
{
    int iCount = 0, icnt = 0;

    while (*str != '\0')
    {
        iCount++;
        str++;
    }
                      // str points to the null terminator '\0' at the end.
    str--;           // Move the pointer one step back to the last character
    for (icnt = iCount; icnt > 0; icnt--, str--)
    {
        printf("%c", *str);
    }
}
int main()
{
    char Arr[50];

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}

/*
output:

Enter the String:Aditya
aytidA

Enter the String:Marvellouse
esuollevraM
*/