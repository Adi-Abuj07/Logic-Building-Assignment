//////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   Used to check whether input is digit or not
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
  BOOL Flag = FALSE;

  if ((ch >= '1') && (ch <= '9'))
  {
    Flag = TRUE;
  }
  return Flag;
}
int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the Digit:");
  scanf("%c", &cValue);

  bRet = ChkDigit(cValue);

  if (bRet == TRUE)
  {
    printf("It is Digit");
  }
  else
  {
    printf("It is not a Digit");
  }
  return 0;
}

/*
  output

  Enter the Digit:5
  It is Digit

  Enter the Digit:r
  It is not a Digit

*/