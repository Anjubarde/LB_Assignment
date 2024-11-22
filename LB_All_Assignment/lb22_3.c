/*
    Accept number of rows and number of colums from user and display below pattern.
    Input : iRow = 5  iCol = 5
    
    Output :  a   b   c   d   e
              1   2   3   4   5
              a   b   c   d   e
              1   2   3   4   5
              a   b   c   d   e
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';
    int iNo = 1;
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
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",iNo);
                iNo++;
            }
        }
        printf("\n");

        if(i % 2 != 0)
        {
            ch = 'a';
        }   
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