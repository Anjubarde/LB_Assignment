/*
    write a recursive program which accept number from user and return largest digit.
    Input : 87983
    Output : 9
*/

#include<stdio.h>

int Max(char *str)
{
    if (*str == '\0') 
    {
        return -1; 
    }

    int rMax = Max(str + 1);

    int currentDigit = *str - '0'; 
    if(rMax == -1 || currentDigit > rMax) 
    {
        return currentDigit;
    }

    return rMax;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Max(Arr);

    printf("Largest Number is : %d\n",iRet);    

    return 0;
}