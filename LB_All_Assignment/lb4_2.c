/*
    Write a program which accept number from user and display
    its Factors in decreasing order. 
*/

#include<stdio.h>

int DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factor of %d are : \n",iNo);
    //      1          2        3
    for(iCnt = 1; iCnt <= iNo/2; iCnt++) // Iteration
    {
        if(iNo % iCnt == 0)  // 4 Selection 
        {
            printf("%d\n",iCnt);
        }
    }
    
    printf("Decreasing order of Factor: \n");
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    // Squence
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DisplayFactors(iValue);
    
    return 0;
}


/*



*/
