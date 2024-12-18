/*
    write a recursive program which accept number from user and count number of small characters.
    Input : HElloWOrlD
    Output : 5
*/

#include<stdio.h>

int Small(char *str)
{
    int iCount = 0;
        if(*str >= 'a' & *str <= 'z');
        {
            iCount++;
        }
    
    return iCount;
}

int main()
{
    char Arr[30]; 
    int iRet = 0;

    printf("Enter String : \n");                   
    scanf("%[^'\n']s",Arr);  

    iRet = Small(Arr);

    printf("Count of small letter is : %d\n",iRet);

    return 0;
}