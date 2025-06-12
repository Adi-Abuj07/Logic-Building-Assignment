///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.c
//  Descreption :   Used to Accept division of student from user and depends on the division display exam timing
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplaySchedule(char ch)
{
 if (ch=='A'|| ch=='a')
 {
    printf("Your exam at 7 AM");
 }
 else if (ch=='B'|| ch=='b')
 {
    printf("Your exam at 9.20 AM");
 }
 else if (ch=='C'|| ch=='c')
 {
    printf("Your exam at 9.20 AM");
 }
 else if (ch=='D'|| ch=='d')
 {
    printf("Your exam at 10.30 AM");
 }
 else
 {
    printf("Invalid input");
 }
 
}
int main()
{
  char cValue = '\0';

  printf("Enter the Division:");
  scanf("%c", &cValue);

  DisplaySchedule(cValue);

  return 0;
}

/*
  output

  Enter the Division:A
  Your exam at 7 AM

  Enter the Division:c
  Your exam at 9.20 AM

*/