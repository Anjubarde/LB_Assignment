/*
    Accept N numbers from user check whether that numbers contains 11 in 
    it or not.
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
     for (int i = 0; i < iLength; i++)
    {
        int iNum = Arr[i];
        while (iNum != 0)
        {
            int iDigit = iNum % 10;  
            iNum /= 10;  
            
            if (iDigit == 1)  
            {
                if (iNum % 10 == 1)
                {
                    return TRUE;  
                }
            }
        }
    }
    return FALSE; 
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;
    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else 
    {
        printf("11 is absent");
    }
    free(p);

    return 0;
}