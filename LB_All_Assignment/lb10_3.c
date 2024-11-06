/*
    Write a program which accept range from user and return addition of all 
    numbers in between that range.
    (Range should contains positive numbers only)

*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int sum = 0;
    
    if(iStart > 0 && iEnd > 0) 
    {
        for(int i = iStart; i <= iEnd; i++) 
        {
            sum += i;
        }
    } 
    else 
    {
        printf("Both numbers should be positive.\n");
        return -1; 
    }
    
    return sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point ");
    scanf("%d",&iValue1);

    printf("Enter Ending point ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}