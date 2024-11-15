/*
    Accept N numbers from user and return the samllest number.
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0]; 

    for (int i = 1; i < iLength; i++) 
    {
        if (Arr[i] < iMin) 
        {
            iMin = Arr[i];  
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter the number");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p, iSize);

    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;
}