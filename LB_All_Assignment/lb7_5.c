/*
    Write a program which returns difference between Even factorial 
    and odd factorial of given number.
*/

#include <stdio.h>

int FactorialDiff(int iNo) 
{
    int EvenFact = 1;
    int OddFact = 1;
    if(iNo < 0) 
    {
        iNo = -iNo;
    }

    while(iNo > 0) 
    {
        if(iNo % 2 == 0) 
        {
            EvenFact = EvenFact * iNo;
        }
        else 
        {
            OddFact = OddFact * iNo;
        }
        iNo--;
    }

    int diff = EvenFact - OddFact;

    return diff;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}