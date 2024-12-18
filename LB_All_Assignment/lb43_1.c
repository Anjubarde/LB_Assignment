/*
    write a recursive program which accept string from user and count white spaces.
    Input : HE llo WOr ID
    Output : 3
*/

#include<stdio.h>

int WhiteSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt++;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);

    printf("Number of spaces are : %d\n",iRet);    

    return 0;
}