#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int icnt=0;
    for(icnt=1;icnt<=(iNo*2);icnt++)
    {
        if(icnt%2==0)
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

    PrintEven(iValue);

    return 0;
}