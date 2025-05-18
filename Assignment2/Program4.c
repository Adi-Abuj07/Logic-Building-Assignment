void Display(int iNo,int Frequency)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int icnt=0;
    for(icnt=1;icnt<=Frequency;icnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0,iCount=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    printf("Enter the Frequeny:");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    
    return 0;
}