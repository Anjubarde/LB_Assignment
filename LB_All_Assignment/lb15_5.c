/*
    Accept N numbers from user and return product of all odd elements.
*/

#include<stdio.h>
int Product(int Arr[], int iLength)
{
    int iProduct = 1;  
    int iFlag = 0;      
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 != 0)  
        {
            iProduct *= Arr[i];  
            iFlag = 1;            
        }
    }
    if(iFlag == 0)  
    {
        return 0;
    }

    return iProduct;
}

int main()
{
    int iSize =0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

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
    }
    iRet = Product(p, iSize);

    printf("Product is : %d",iRet);
    free(p);

    return 0;
}