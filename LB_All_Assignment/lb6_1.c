/* 
    Write a program which accept number from user and if number is less
    than 50 thn print small, if it is greater than 50 and less than 100 
    then print medium, if it is greater than 100 then print larger.
*/

#include<stdio.h>

void Number(int iNo)
{

    if(iNo < 50)
    {
        printf("Small\n");
    }

    else if(50 <= iNo && iNo <= 100)
    {
        printf("Medium\n");
    }

    else  
    {
        printf("Large\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}