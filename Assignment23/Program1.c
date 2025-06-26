///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Used to Display ASCII Table
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII() {
    int icnt = 0;

    printf("Count\tChar\tDec\tOct\tHex\n");
    printf("-----\t----\t---\t---\t---\n");

    for (icnt = 0; icnt <= 255; icnt++) {
        if (icnt < 32 || icnt == 127)
            printf("%3d\tNon\t%3d\t%03o\t%02X\n", icnt, icnt, icnt, icnt);
        else
            printf("%3d\t%3c\t%3d\t%03o\t%02X\n", icnt, icnt, icnt, icnt, icnt);
    }
}

int main()
{
  DisplayASCII();

  return 0;
}

/*
  output

  

*/