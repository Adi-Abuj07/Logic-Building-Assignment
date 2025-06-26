///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   if character is capital display the character till Z and if it small display in reverse order till a.
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    int icnt = 0;

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (icnt = ch; icnt <= 'Z'; icnt++)
        {
            printf("%c ", icnt);
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (icnt = ch; icnt >= 'a'; icnt--)
        {
            printf("%c ", icnt);
        }
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

  Enter the character:J
  J K L M N O P Q R S T U V W X Y Z

  Enter the character:h
  h g f e d c b a

*/