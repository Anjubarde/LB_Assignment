/*
    Write a program which accept radius of circle from user and 
    calculate its area. 
    consider value of PI as 3.14 (Area = PI * Radius * Radius)
*/

#include <stdio.h>

double CircleArea(float fRadius) 
{
    const float PI = 3.14;

    return fRadius * fRadius * PI;
}

int main() 
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is %f", dRet);

    return 0;
}