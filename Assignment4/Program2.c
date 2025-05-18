#include<stdio.h>
void FactDescending(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=(iNo/2);icnt>=1;icnt--)
    {
        if(iNo%icnt==0)
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

    FactDescending(iValue);

    return 0;
}