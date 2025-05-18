#include<stdio.h>
void PrintPattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=1;icnt<iNo;icnt++)
    {
        printf("* $ ");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    PrintPattern(iValue);

    return 0;
}