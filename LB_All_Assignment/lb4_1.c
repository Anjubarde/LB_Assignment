/* 
    Write a program which accept number from user
    and display its multiplication of factors. 
*/

#include<stdio.h>

int DisplayFactors(int iNo)
{
    int iCnt = 0;
    int iMultiplication = 1;

    printf("Factor of %d are : \n",iNo);
    //      1          2        3
    for(iCnt = 1; iCnt <= iNo/2; iCnt++) 
    {
        if(iNo % iCnt == 0)  
        {
            printf("%d\n",iCnt);
            iMultiplication *= iCnt;
        }
    }
    if(iNo > 0)
    {
        printf("%d\n",iNo);
        iMultiplication *= iNo;
    }
    printf("Multiplication of Factor is : %d\n", iMultiplication);
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DisplayFactors(iValue);

    return 0;
}
