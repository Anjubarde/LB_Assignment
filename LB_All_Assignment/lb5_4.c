/*
    Write a program which accepts N from user and print all odd numbers
    up to N.
*/

#include<stdio.h>

int OddDisplay(int iNo)
{
    printf("All odd Number up to N :\n");
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\n", iCnt);
        }
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    OddDisplay(iValue);

    return 0;
}