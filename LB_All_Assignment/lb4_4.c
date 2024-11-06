/*
    Write a program which accept number from user and return summation 
    of all its non factors
*/

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0, iSum = 0;
    printf("Non Factor of %d are : \n",iNo);
    //      1          2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        if(iNo % iCnt != 0)  
        {
            iSum = iSum + iCnt;
            printf("%d\n",iCnt);
        }
    }
    return iSum;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);
    printf("Summation of Non Factors is : %d\n",iRet);
    
    return 0;
}

