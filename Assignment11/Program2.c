#include<stdio.h>
void Pattern(int iNo)
{
    int icnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(icnt=iNo;icnt>=1;icnt--)
    {
        printf("\t%d\t#",icnt);
    }
}
int main()
{
    int iValue=0;
    
    printf("Enter number of Elements:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

/*
output :-

   4       #       3       #       2       #       1       #

*/