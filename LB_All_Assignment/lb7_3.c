/*
    Write a program to find even factorial of given number.
*/

#include <stdio.h>

int EvenFactorial(int iNo) 
{
    int Result = 1;
    //convert to positive integer
    if(iNo < 0) {
        iNo = -iNo;
    }
    //convert odd number to even
    if(iNo % 2 != 0) {
        iNo = iNo - 1;
    }

    while(iNo>0) {
        Result = Result * iNo;
        iNo = iNo - 2;
    }

    return Result; 
}

int main() {
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}