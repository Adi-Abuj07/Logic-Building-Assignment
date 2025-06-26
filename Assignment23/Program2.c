///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Convert the character to its corresponding character
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Corresponding character Small are:%c", ch + 32);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("Corresponding character Capital are:%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}

/*
  output

  Enter the character:a
  Corresponding character Capital are:A
  
  Enter the character:A
  Corresponding character Small are:a

  Enter the character:7
  7

*/