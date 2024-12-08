/*
    Write a program which accept two numbers from user and display position of common ON 
    bits from that two numbers.
*/

#include <stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT commonBits = iNo1 & iNo2;
    if (commonBits == 0)
    {
        printf("No common ON bits.\n");
        return;
    }

    printf("Positions of common ON bits: ");

    int pos = 0;
    while (commonBits > 0)
    {
        if (commonBits & 1)
        {
            printf("%d ", pos);
        }
        commonBits = commonBits >> 1;
        pos++;
    }
    printf("\n");
}

int main()
{
    UINT iValue1, iValue2;
    printf("Enter the first number: ");
    scanf("%u", &iValue1);

    printf("Enter the second number: ");
    scanf("%u", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}
