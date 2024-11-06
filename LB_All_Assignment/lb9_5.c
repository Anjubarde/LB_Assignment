/*

    Write a program which accept area in square feet and convert 
    it into square meter.(1 square feet = 0.20929 Square meter)
*/

#include <stdio.h>

double SquareMeter(int iValue) 
{
    const double meter = 0.0929;

    return iValue * meter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet into square meter is %f",dRet);

    return 0;
}