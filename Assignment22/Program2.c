//////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Used to check whether it is Capital or not
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
  BOOL Flag = FALSE;

  if ((ch >= 'A') && (ch <= 'Z'))
  {
    Flag = TRUE;
  }
  return Flag;
}
int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character:");
  scanf("%c", &cValue);

  bRet = ChkCapital(cValue);

  if (bRet == TRUE)
  {
    printf("It is Capital letter");
  }
  else
  {
    printf("It is not a Capital letter");
  }
  return 0;
}

/*
  output

  Enter the character:r
  It is not a Capital letter

  Enter the character:A
  It is Capital letter

*/