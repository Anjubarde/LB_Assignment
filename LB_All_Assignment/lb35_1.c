/*
    Write a program which accept one number from user and count numnber of ON (1) bits in 
    it without using % and / operator.
*/

#include <stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int count = 0;

    while(iNo > 0)
    {
        if(iNo & 1)
        {
            count++; 
        }
        iNo = iNo >> 1;
    }
    return count;
}

int main()
{
    UINT iValue;
    printf("Enter a number: ");
    scanf("%u", &iValue);

    int result = CountOne(iValue);

    printf("Number of ON bits: %d\n", result);

    return 0;
}
