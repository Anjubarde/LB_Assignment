/*
    write a recursive program which accept number from user and return smallest digit.
    Input : 87983
    Output : 3
*/

int Min(int iNo)
{
    if(iNo == 0)
    {
        return 9; 
    }
    int digit = iNo % 10;
    int restMin = Min(iNo / 10);

    if(digit < restMin) 
    {
        return digit;
    }
    return restMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("%d",iRet);

    return 0;
}