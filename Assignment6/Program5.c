
#include<stdio.h>

void RevTable(int iNo)
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
   for (icnt=10;icnt>=1;icnt--)
   {
       printf("%d\t",iNo*icnt);
   }
  
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    RevTable(iValue);
    
    return 0;
}