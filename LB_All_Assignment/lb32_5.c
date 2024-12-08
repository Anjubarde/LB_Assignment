/*
    Write a program which checks whether first and last bit is On or Off. First bit means 
    bit number 1 and last bit means bit number 32.  
*/

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT firstBitMask = 0x1;
    
    UINT lastBitMask = 0x80000000;

    if((iNo & firstBitMask) != 0 && (iNo & lastBitMask) != 0) 
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
        printf("Both the first and last bits are ON\n");
    } 
    else 
    {
        printf("Either the first or last bit (or both) are OFF\n");
    }

    return 0;
}
