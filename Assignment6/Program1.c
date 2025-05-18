#include<stdio.h>
void CheckNumber(int iNo)
{
    if(iNo<=0)
    {
       return;
    }
    if((iNo>0)&&(iNo<50))
    {
      printf("Small");
    }
    else if((iNo>=50)&&(iNo<=100))
    {
      printf("Medium");
    }
    else
    {
      printf("Large");
    }
  
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return 0;
}