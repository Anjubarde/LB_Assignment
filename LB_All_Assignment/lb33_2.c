/*
    Write a program which accept one number from user and off 7th and 10th bit of that 
    number. Return modified number.
*/

#include <stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT mask = ~( (1 << 6) | (1 << 9) );

    iNo = iNo & mask;

    return iNo;
}

int main()
{
    UINT iValue;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iValue = OffBit(iValue);

    printf("Modified number: %u\n", iValue);

    return 0;
}
