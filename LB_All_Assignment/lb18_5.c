/*
    Write a program which returns difference between Even factorial and Odd factorial of given number.
    Input - 5
    Output - -7 (8-15)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 2; iCnt <= iNo; iCnt += 2) 
    {
        iFact *= iCnt;
    }
    return iFact;
}

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt += 2) 
    {
        iFact *= iCnt;
    }
    return iFact;
}

int FactorialDiff(int iNo)
{
    int iEvenFact = EvenFactorial(iNo);
    int iOddFact = OddFactorial(iNo);

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is :  %d",iRet);
    
    return 0;
}