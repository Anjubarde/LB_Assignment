/*
    Wrie a program which accept one number fromm user and check whether 9th or 12th bit is
    on off.
*/

#include <stdio.h>
typedef unsigned int UINT;

int ChkBit(UINT iNo)
{
    UINT mask9 = 1 << 8;
    UINT mask12 = 1 << 11;

    if(iNo & mask9) 
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }

    if(iNo & mask12) 
    {
        printf("12th bit is ON\n");
    }
    else
    {
        printf("12th bit is OFF\n");
    }
    return 0;
}

int main()
{
    UINT iValue;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    ChkBit(iValue);

    return 0;
}
