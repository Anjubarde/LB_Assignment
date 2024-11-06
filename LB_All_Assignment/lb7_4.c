/*
    Write a program to find odd factorial of given number.
*/

#include <stdio.h>

int OddFactorial(int iNo) 
{
    int Result = 1;

    if(iNo < 0) {
        iNo = -iNo;
    }
    if(iNo % 2 == 0) {
        iNo = iNo - 1;
    }

    while(iNo > 0) {
        Result = Result * iNo;
        iNo = iNo - 2;
    }

    return Result;

}

int main() {
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}