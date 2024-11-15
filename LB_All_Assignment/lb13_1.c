/*
    Accept N numbers from user and return difference between summation of
    even elements and summation of odd elements.
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iEsum = 0, iOsum = 0;

    for(int i = 0; i< iLength; i++)
    {
        if(Arr[i]%2 == 0)
        {
            iEsum += Arr[i];
        }
        else
        {
            iOsum += Arr[i];
        }
    }
    return iEsum - iOsum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int*p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p==NULL)
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

    iRet = Difference(p, iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}