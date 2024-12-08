/*
    Write a program which accept one number and position from user and check whether bit 
    at that position is on or off. If bit is one 
*/

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT mask = 1 << iPos;

    if(iNo & mask)  
    {
        return TRUE;  
    }
    else
    {
        return FALSE;  
    }
}

int main()
{
    UINT iValue;
    int iPos;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the position to check: ");
    scanf("%d", &iPos);

    if(ChkBit(iValue, iPos))
    {
        printf("The bit at position %d is ON.\n", iPos);
    }
    else
    {
        printf("The bit at position %d is OFF.\n", iPos);
    }

    return 0;
}
