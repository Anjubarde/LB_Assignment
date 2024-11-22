/*
    Accept number of rows and number of colums from user and display below pattern.
    Input : iRow = 4  iCol = 5
    Output :  2   4   6   8   10
              1   3   5   7   9
              2   4   6   8   10
              1   3   5   7   9
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 1, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", j*2 - 1);
            }
            else if(i % 2 != 0)
            {
                printf("%d\t", j*2);
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