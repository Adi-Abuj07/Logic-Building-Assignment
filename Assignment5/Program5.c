#include<stdio.h>
void FirstFiveMultiple(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=1;icnt<=5;icnt++)
    {
        printf("%d\t",iNo*icnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    FirstFiveMultiple(iValue);

    return 0;
}