/*
    Write a recursive program which display below pattern.
    Output : A   B   C   D   E   F
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
