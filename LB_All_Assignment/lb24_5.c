/*
    Accept number of rows and number of colums from user and display below pattern.
    Input : iRow = 4  iCol = 4

    Output :  1   2   3   4
                  2   3   4
                      3   4
                          4
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
        for(j = 1; j < i; j++) 
        {
            printf("\t");
        }

        for(j = i; j <= iCol; j++) 
        {
            printf("%d\t", j);
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