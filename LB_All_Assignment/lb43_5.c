/*
    write a recursive program which accept number from user and return its reverse number.
    Input : 523
    Output : 325
*/

int Reverse(int iNo)
{
    static int iRev = 0;  

    if(iNo == 0)
    {
        return iRev;
    }
    int digit = iNo % 10;
    iRev = iRev * 10 + digit;

    return Reverse(iNo / 10);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("%d",iRet);

    return 0;
}