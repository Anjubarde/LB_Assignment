/*
    Write program which accept range from user and return addition of all 
    even numbers in between that range.(Range should contains positive numbers only)
*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int sum = 0;
    if(iStart <= 0 || iEnd <= 0) 
    {
        printf("Both numbers should be positive.\n");
        return -1; 
    }

    for(int i = iStart; i <= iEnd; i++) 
    {
        if(i % 2 == 0) 
        { 
            sum += i;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}