/*
    Write a program which accept number from user and return 
    multiplication of all digits.
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int product = 1; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;  
        product = product * iDigit;  
        iNo = iNo / 10;     
    }
    return product;  
}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}