/*
    Write a program which accept number from user and count frequency of 
    2 in it.
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int count = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            count++;
        }
        iNo = iNo/10;
    }
    return count;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    printf("%d",bRet);

    return 0;
}