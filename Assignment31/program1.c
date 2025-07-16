#include<stdio.h>
typedef int UINT;
UINT Offbit(UINT iNo,UINT iPos)
{

}
int main()
{
    UINT iValue=0,iloc=0,iRes=0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    printf("Enter the Bit that U want to update :");
    scanf("%d",&iloc);

    iRes=Offbit(iValue,iloc);

    printf("Update value is : %d",iRes);

    return 0;
}