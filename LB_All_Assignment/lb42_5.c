/*
    Write a recursive program which accept number from user and return its product of digits.
    input : 523
    Output : 30
*/

int Mult(int iNo)
{
    int iCnt = 0, iProduct = 1, iDigit = 0;

    for(iCnt = 1; iCnt <= iNo; iNo++)
    {
        iDigit = iNo % 10;
        iProduct *= iDigit;
        iCnt++;     
    }
    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}