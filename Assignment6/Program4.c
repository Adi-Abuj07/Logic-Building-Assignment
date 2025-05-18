
#include<stdio.h>

void Table(int iNo)
{
    if(iNo==0)
    {
       return;
    }
   if(iNo<0)
   {
    iNo=-iNo;
   }
   int icnt=0;
   for (icnt=1;icnt<=10; icnt++)
   {
       printf("%d\t",iNo*icnt);
   }
  
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}