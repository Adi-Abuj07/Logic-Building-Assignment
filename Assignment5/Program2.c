#include<stdio.h>
void PrintNum(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    PrintNum(iValue);

    return 0;
}