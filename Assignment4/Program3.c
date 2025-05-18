#include<stdio.h>
void NonFactor(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=1;icnt<iNo;icnt++)
    {
        if(iNo%icnt!=0)
        {
            printf("%d\t",icnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    NonFactor(iValue);

    return 0;
}