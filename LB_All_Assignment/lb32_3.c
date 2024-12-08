/*
    Write a program which checks whether 7th & 15th & 21st, 28th bit is On or Off.
*/

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT mask = (1 << 6) | (1 << 14) | (1 << 20) | (1 << 27);

    if((iNo & mask) == mask) 
    {
        return TRUE; 
    }
    return FALSE; 
}

int main()
{
    UINT iValue;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    if(ChkBit(iValue)) 
    {
        printf("7th, 15th, 21st, and 28th bits are ON\n");
    } 
    else 
    {
        printf("Either 7th, 15th, 21st, or 28th bits are OFF\n");
    }

    return 0;
}