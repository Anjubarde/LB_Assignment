/*
    Write a program which accept string from user and accept one character.
    Return index of first occurrence of that character.

    Input : "Marvellous Multi OS"
             M
    Output : 11

    Input : "Marvellous Multi OS"
             W
    Output : -1

    Input : "Marvellous Multi OS"
             e
    Output : 4
*/

int LastChar(char *str, char ch)
{
    int length = strlen(str);  

    for(int i = length - 1; i >= 0; i--)
    {
        if(str[i] == ch)
        {
            return i;  // Return the index of the last occurrence
        }
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string");
    scanf("%[^'\n']s",arr);

    printf("Enter the character");
    scanf("%c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}