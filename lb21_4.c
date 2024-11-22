/*
    Accept number of rows and number of coulmns from user and display below pattern.
    Input : iRow = 4  iCol = 5

    Output : 4   4   4   4   4
             3   3   3   3   3
             2   2   2   2   2
             1   1   1   1   1
*/

#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    //    1       2        3
    for(i = iRow; i >= 1; i--)     // Outer (Rows)
    {
        //    1        2       3
        for(j = 1; j <= iCol; j++) // Inner (Columns)
        {
            printf("%d\t",i);         // 4
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of row : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of column : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}