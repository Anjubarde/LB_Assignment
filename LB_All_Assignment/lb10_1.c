/*
    Write a program which accept range from user and display all numbers 
    in between that range.
*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart <= iEnd) 
    {
        for(int i = iStart; i <= iEnd; i++)
        {
            printf("%d \n", i); 
        }
    }
    else
    {
        for(int i = iStart; i >= iEnd; i--) 
        {
            printf("%d \n", i); // Print the number with a space between each
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}