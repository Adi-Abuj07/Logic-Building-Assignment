#include<stdio.h>
void PrintOdds(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=1;icnt<iNo;icnt++)
    {
       if(icnt%2!=0)
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

    PrintOdds(iValue);

    return 0;
}