/*
    Write a program to find factorial of given number.
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;

    //      1          2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
       iFactorial *= iCnt;
    }  
    return iFactorial; 
}

int main()
{
    int iValue =0, iRet = 0;

    printf("enter the number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);

    return 0;
}