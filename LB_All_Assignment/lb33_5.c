/*
    Write a program which accept one number from user and on its first 4 bits. Return 
    modified number.
*/

#include <stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT mask = (1 << 4) - 1;  

    iNo = iNo | mask;

    return iNo;
}

int main()
{
    UINT iValue;
    printf("Enter a number: ");
    scanf("%u", &iValue);

    iValue = OnBit(iValue);

    printf("Modified number: %u\n", iValue);

    return 0;
}
