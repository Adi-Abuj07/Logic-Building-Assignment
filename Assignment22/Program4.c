//////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   Used to check whether input is Small case character or not
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
  BOOL Flag = FALSE;

  if ((ch >= 'a') && (ch <= 'z'))
  {
    Flag = TRUE;
  }
  return Flag;
}
int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the Character:");
  scanf("%c", &cValue);

  bRet = ChkSmall(cValue);

  if (bRet == TRUE)
  {
    printf("It is Small case character");
  }
  else
  {
    printf("It is not a Small case character");
  }
  return 0;
}

/*
  output

  Enter the Character:A
  It is not a Small case character

  Enter the Character:a
  It is Small case character

*/