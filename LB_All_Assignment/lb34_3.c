/*
    Write a program which accept one number and position from user and on that bit. 
    Return modified number.
*/

#include <stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT mask = 1 << iPos;

    iNo = iNo | mask;

    return iNo;
}

int main()
{
    UINT iValue;
    int iPos;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the position of the bit to turn on: ");
    scanf("%d", &iPos);

    iValue = OnBit(iValue, iPos);

    printf("Modified number: %u\n", iValue);

    return 0;
}
