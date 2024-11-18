/*
   Accept amount in US dollar and return its corresponding value in Indian currency.
   Consder 1$ as 70 rupees.
    Input - 10
    Output - 700
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);
    
    return 0;
}