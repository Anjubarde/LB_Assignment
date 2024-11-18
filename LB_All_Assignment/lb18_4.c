/*
    Write a program to find odd factorial of given number.
    Input - 5
    Output - 15 (5*3*1)
*/

#include<stdio.h>

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

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d",iRet);
    
    return 0;
}