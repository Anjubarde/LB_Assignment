/*
    Write a program which accept one number from user and range of positions from user. 
    Toggle all bits from that range.
*/

#include <stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    if(iStart > iEnd || iStart < 0 || iEnd >= 32)
    {
        printf("Invalid range\n");
        return iNo;
    }

    UINT mask = ((1 << (iEnd - iStart + 1)) - 1) << iStart;

    iNo = iNo ^ mask;

    return iNo;
}

int main()
{
    UINT iValue;
    int iStart, iEnd;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the start position of the range: ");
    scanf("%d", &iStart);

    printf("Enter the end position of the range: ");
    scanf("%d", &iEnd);

    UINT modifiedValue = ToggleBitRange(iValue, iStart, iEnd);

    printf("Modified number: %u\n", modifiedValue);

    return 0;
}
