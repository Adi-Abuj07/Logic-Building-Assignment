#include<stdio.h>
void Pattern(int iNo)
{
    int icnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("\t%d\t*",icnt);
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

 1       *       2       *       3       *       4       *

*/