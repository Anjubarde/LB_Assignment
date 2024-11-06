/*
    Write a program which accept number from user and return difference
    between summation of all its factors and non factors.
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0, iAns = 0;

    printf("Factor of %d are : \n",iNo);
    //      1          2        3
    for(iCnt = 1; iCnt <= iNo/2; iCnt++) 
    {
        if(iNo % iCnt == 0)  
        {
            iSum1 = iSum1 + iCnt;
            printf("%d\n",iCnt);
        }
    }

    printf("Non Factor of %d are : \n",iNo);
    //      1          2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        if(iNo % iCnt != 0)  
        {
            iSum2 = iSum2 + iCnt;
            printf("%d\n",iCnt);
        }
    }

    iAns = iSum1 - iSum2;
    printf("Difference is : %d\n",iAns);

    return iAns;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;

}