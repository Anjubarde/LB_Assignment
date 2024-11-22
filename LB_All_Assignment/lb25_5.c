/*
    Accept number of rows and number of colums from user and display below pattern.
    Input : iRow = 4  iCol = 4
    
    Output :  1   2   3   4   5
              1   2           5
              1       3       5
              1           4   5
              1   2   3   4   5
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input \n");
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            
            else
            {
                if(j == 1) 
                {
                    printf("1\t");
                }
                else if(j == iCol) 
                {
                    printf("%d\t", i);
                }
                else if(j == i) 
                {
                    printf("%d\t", j);
                }
                else
                {
                    printf("\t");                 }
            }
        }
        printf("\n");
        
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Number : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}