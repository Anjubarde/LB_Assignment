/*
    Write a program which accept number from user and print that number
    of $ & * on screen. 
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {                                       
        printf("$ ");
    }

    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {                                       
        printf("& ");
    }

    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {                                       
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}