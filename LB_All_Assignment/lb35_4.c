/*
    Write a program which accept one number,two positions from user and check whether bit
    at first or bit at second position is ON and OFF.
*/

#include <stdio.h>
typedef unsigned int UINT;

int ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT mask1 = 1 << iPos1;
    UINT mask2 = 1 << iPos2;

    if(iNo & mask1)
    {
        printf("Bit at position %d is ON\n", iPos1);
    }
    else
    {
        printf("Bit at position %d is OFF\n", iPos1);
    }

    if(iNo & mask2)
    {
        printf("Bit at position %d is ON\n", iPos2);
    }
    else
    {
        printf("Bit at position %d is OFF\n", iPos2);
    }

    return 0;
}

int main()
{
    UINT iValue;
    int iPos1, iPos2;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter first bit position: ");
    scanf("%d", &iPos1);

    printf("Enter second bit position: ");
    scanf("%d", &iPos2);

    ChkBit(iValue, iPos1, iPos2);

    return 0;
}
