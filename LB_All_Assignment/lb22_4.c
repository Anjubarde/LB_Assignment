/*
    Accept number of rows and number of colums from user and display below pattern.
    Input : iRow = 5  iCol = 5
    
    Output :  1   2   3   4   5
             -1  -2  -3  -4  -5
              1   2   3   4   5
             -1  -2  -3  -4  -5
              1   2   3   4   5
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf(" %d\t",j);
            }
            else
            {
                printf("-%d\t",j);
            }
        }
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows: \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns: \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}