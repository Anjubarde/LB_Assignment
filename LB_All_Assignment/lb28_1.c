/*
    Write a program which accept string from user and convert it into
    lower case.

    Input : "Marvellous Multi OS"
    Output : marvellous multi os
*/

void strlwrx(char *str)
{
    while(*str != '\0') 
    {
        
        if(*str >= 'A' && *str <= 'Z') 
        {
            *str = *str + ('a' - 'A');
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