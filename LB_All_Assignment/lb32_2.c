/*
    Write a program which checks whether 5th and 18th bit is On or Off.
*/

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    if((iNo & 0x20010) == 0x20010) 
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
        printf("Both 5th and 18th bits are ON\n");
    } 
    else 
    {
        printf("Either 5th or 18th bit or both are OFF\n");
    }

    return 0;
}