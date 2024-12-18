/*
    Write a recursive program which accept number from user and return summation of its digits.
    Input : 879
    Output : 24
*/

int Sum(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iNo++)
    {
        if(iNo == 0)
        {
            return iCnt;
        }
        else
        {
            return (iNo % 10) + Sum(iNo / 10);
        }
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Sum of digits : %d",iRet);

    return 0;
}