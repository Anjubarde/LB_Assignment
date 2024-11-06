/*
    Accept amount in US dollar and return its coresponding value in 
    Indian currency in Indian currency. Consider 1$ ans 70 rupees.
*/

#include <stdio.h>

int DollerToINR(int iNo) 
{
    return iNo * 70;
}

int main() {
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}