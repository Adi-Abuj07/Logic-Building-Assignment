#include<stdio.h>
void PrintEvenFactor(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int icnt=0;
    for(icnt=1;icnt<iNo;icnt++)
    {
        if(((iNo%icnt)==0) &&((icnt%2)==0) )
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

    PrintEvenFactor(iValue);

    return 0;
}