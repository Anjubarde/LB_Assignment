/*
    Accept number of rows and number of colums from user and display below pattern.
    Input : iRow = 4  iCol = 4
    
    Output :  1   2   3   4
              5   6   7   8
              9   1   2   3
              4   5   6   7
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 1, j = 0;
    int iNo = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iNo);
            iNo++;
            if(iNo > 9)
            {
                iNo = 1;
            }
        }
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Row : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Column : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}