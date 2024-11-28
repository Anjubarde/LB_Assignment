/*
    Write a program which accept string from user and accept one character.
    Return frequency of that character.

    Input : "Marvellous Multi OS"
             M
    Output : 2

    Input : "Marvellous Multi OS"
             W
    Output : 0
*/

int CountChar(char *str, char ch)
{
    int count = 0;  
    
    while(*str != '\0') 
    {
        if(*str == ch) 
        {
            count++;  
        }
        str++;  
    }
    return count;  
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the String");
    scanf("%[^'\n']s",arr);

    printf("Enter the character");
    scanf("%c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}