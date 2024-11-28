/*
    Write a program which accept string from user and display only digits
    from that string.

    Input : "marve89llous121"
    Output : 89121

    Input : "Demo"
    Output : 

*/

void DisplayDigit(char *str)
{
    while(*str != '\0') 
    {
        
        if(*str >= '0' && *str <= '9') 
        {
            printf("%c", *str);
        }
        str++; 
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter String");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}