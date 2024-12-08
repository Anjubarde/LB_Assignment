/*
    Write a program which accept one number from user and toggle contents of first and 
    last nibble of the number. Return modified number.(Nibble is a froup of four bits).
*/

#include <stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT firstNibble = (iNo & 0xF0000000) >> 28;  
    
    UINT lastNibble = iNo & 0xF;

    firstNibble = firstNibble ^ 0xF;  
    lastNibble = lastNibble ^ 0xF;    

    iNo = iNo & ~(0xF0000000);  
    iNo = iNo & ~0xF;          

    iNo = iNo | (firstNibble << 28);
    iNo = iNo | lastNibble;          

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
