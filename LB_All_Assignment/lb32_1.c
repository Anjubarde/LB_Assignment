/*
    Write a program which checks whether 15th bit is On or Off.    
*/

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    if(iNo & 0x8000) 
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
        printf("15th bit is ON\n");
    } 
    else 
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}