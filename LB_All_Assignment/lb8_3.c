/*
    Write a program which accept distance in kilometre and convert it 
    into meter. (1 Kilometre = 1000 Meter)
*/

#include <stdio.h>

int KMtoMeter(int iNo) 
{
    const int KM = 1000;

    return iNo * KM;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter %d",iRet);

    return 0;
}