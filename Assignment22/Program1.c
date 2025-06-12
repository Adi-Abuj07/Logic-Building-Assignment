///////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Used to check whether it is alphabet or not
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
  BOOL Flag = FALSE;

  if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

  bRet = ChkAlpha(cValue);

  if (bRet == TRUE)
  {
    printf("It is Character");
  }
  else
  {
    printf("It is not a charater");
  }
  return 0;
}

/*
  output

  Enter the character:A
  It is Character

  Enter the character:$
  It is not a charater

*/