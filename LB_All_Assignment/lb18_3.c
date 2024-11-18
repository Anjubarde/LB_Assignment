/*
    Write a program to find even factorial of given number.
    Input - 5
    Output - 8 (4*2)
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

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d",iRet);
    
    return 0;
}