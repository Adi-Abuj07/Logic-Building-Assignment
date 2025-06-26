///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   Accept the character from user and display its ASCII value in decimal,octal and hexadecimal format
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal : %d",ch);
    printf("\nOctal : 0%o",ch);
    printf("\nHexadecimal : 0X%X",ch);
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

  Enter the character:A
  Decimal : 65
  Octal : 0101
  Hexadecimal : 0X41

*/