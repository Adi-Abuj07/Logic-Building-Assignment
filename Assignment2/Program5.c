#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);
    if(bRet==TRUE)
    {
        printf("%d is Even number ",iValue);
    }
    else
     {
        printf("%d is Odd number",iValue);  
     }
    return 0;
}