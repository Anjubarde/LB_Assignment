/*
    Write a program which accept one number from user and toggle 7th bit of that number. 
    Return modified number.
*/

#include <stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT mask = 1 << 6;
    iNo = iNo ^ mask;

    return iNo;
}

int main()
{
    UINT iValue;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iValue = ToggleBit(iValue);

    printf("Modified number: %u\n", iValue);

    return 0;
}
