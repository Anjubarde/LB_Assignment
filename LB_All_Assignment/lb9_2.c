/*
    Write a program which accept width and height of rectangle from user 
    and calculate its area. (Area = Width * Height) 
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter Height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle : %.2f",dRet);

    return 0;
}
