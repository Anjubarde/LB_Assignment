/*
    Accept number of rows and number of coulmns from user and display below pattern.
    Input : iRow = 4  iCol = 4

    Output : A   B   C   D
             a   b   c   d
             A   B   C   D
             a   b   c   d
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    if(iRow != iCol)
    {
        printf("Invalid input\n");
    }
    
    for(i = 1, ch1 = 'A', ch2 = 'a'; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch2);
                ch2++;
            }
            else
            {
                printf("%c\t",ch1);
                ch1++;
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