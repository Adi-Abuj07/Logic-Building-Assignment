#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    while(iNo>icnt)
    {
        printf("*\t");
        iNo--;
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}