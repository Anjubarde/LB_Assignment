/*
    4) Accept two number from user and display first number in second number of times. 
*/

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iint = 0;

    for(iint = 0; iint < iFrequency; iint++)
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    printf("Enter frequency :\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}