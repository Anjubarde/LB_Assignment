/*
    Write a program which accept string from user and count number of 
    white spaces.

    Input : "MarvellouS"
    Output : 0

    Input : "MarvellouS Infosystems"
    Output : 1

    Input : "MarvellouS Infosystems by Piyush Manohar Khairnar"
    Output : 5
*/

int CountWhite(char *str)
{
     int count = 0;

    while(*str != '\0') 
    {
        if(*str == ' ') 
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
    int iRet = 0;

    printf("Enter String");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("%d",iRet);

    return 0;
}