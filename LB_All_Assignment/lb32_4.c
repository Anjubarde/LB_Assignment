/*
    Write a program which checks whether 7th & 8th & 9th bit is On or Off.
*/

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT mask = (1 << 6) | (1 << 7) | (1 << 8);

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
        printf("7th, 8th, and 9th bits are ON\n");
    } 
    else 
    {
        printf("Either 7th, 8th, or 9th bit is OFF\n");
    }

    return 0;
}

