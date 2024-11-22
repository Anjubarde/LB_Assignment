/*
    Accept number of rows and number of colums from user and display below pattern.
    Input : iRow = 4  iCol = 4
    
    Output :  *   *   *   #
              *   *   #   @
              *   #   @   @
              #   @   @   @
*/

#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    //    1       2        3
    for(i = 1; i <= iRow; i++)     // Outer (Rows)
    {
        //    1        2       3
        for(j = 1; j <= iCol; j++) // Inner (Columns)
        {
            if(i+j == 5)
            {
                printf("#\t");  
            }
            else if( i+j < 5)
            {
                printf("*\t");  
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of row : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of colum : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}