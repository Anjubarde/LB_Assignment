/*
    Write a program which accept string from user and convert it into 
    upper case.

    Input : "Marvellous Multi OS"
    Output : MARVELLOUS MULTI OS
*/

void struprx(char *str)
{
     while(*str != '\0') 
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }
        str++; 
    }
}

int main()
{
    char arr[20];

    printf("Enter String");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);
    printf("Modified string is %s",arr);

    return 0;
}