/*
    Write a program which accept temprature in Fahrenheit and convert it 
    into celsius. (1 celsius = (Fahrenheit - 32)*(5/9))
*/

#include <stdio.h>

double FhtoCs(float fTemp)
{
    return ((fTemp-32.0) * (5.0/9.0));
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit to Celsius is %f",dRet);

    return 0;
}