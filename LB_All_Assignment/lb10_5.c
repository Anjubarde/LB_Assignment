/*
    Write a program which accept range from user and display all numbers 
    in between that range in reverse order.
*/

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        for(int i = iStart; i >= iEnd; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(int i = iEnd; i >= iStart; i--) 
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;

    printf("Enter Starting point ");
    scanf("%d",&iValue1);

    printf("Enter Ending point ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}