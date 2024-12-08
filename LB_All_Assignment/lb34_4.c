/*
    Write a program which accept one number and position from user and toggle that bit. 
    Return modified number.
*/

#include <stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT mask = 1 << iPos;
    iNo = iNo ^ mask;

    return iNo;
}

int main()
{
    UINT iValue;
    int iPos;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the position of the bit to toggle: ");
    scanf("%d", &iPos);

    iValue = ToggleBit(iValue, iPos);

    printf("Modified number: %u\n", iValue);

    return 0;
}
