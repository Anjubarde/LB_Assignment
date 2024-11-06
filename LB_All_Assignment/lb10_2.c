/*
    Write a program which accept range user and display all even numbers 
    in between that range.
*/

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    for(int i = iStart; i <= iEnd; i++) 
    {
        if(i % 2 == 0) 
        { 
            printf("%d\n ", i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point ");
    scanf("%d",&iValue1);

    printf("Enter Ending point ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}