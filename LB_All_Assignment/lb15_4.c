/*
    Accept N numbers user and accept Range, Display all Elements from that range..
*/

#include<stdio.h>
int Product(int Arr[], int iLength, int iMin, int iMax)
{
    int iFlag = 0; 
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] >= iMin && Arr[i] <= iMax) 
        {
            printf("%d ", Arr[i]);
            iFlag = 1; 
        }
    }

    if(iFlag == 0)
    {
        printf("No elements found in the given range\n");
    }
}

int main()
{
    int iSize = 0, iRet = 0, iValue = 0, iCnt = 0;
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

    printf("Enter %d elements ",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Check(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurrence of number is %d",iRet);
    }
    free(p);
    
    return 0;
}