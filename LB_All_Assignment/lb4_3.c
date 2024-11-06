/*
    Write a program which accept number from user and display all its 
    non factors. 
*/

#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    printf("Non factor of %d are : \n",iNo);
    //      1          2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++) // Iteration
    {
        if(iNo % iCnt != 0)  // 4 Selection 
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    // Squence
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DisplayNonFactors(iValue);
    
    return 0;
}

