#include<stdio.h>
void Pattern(int iNo)
{
    int icnt=0;
    char ch='A';

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(icnt=1;icnt<=iNo;icnt++,ch++)
    {
        printf("%c\t",ch);
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

A       B       C       D

*/
