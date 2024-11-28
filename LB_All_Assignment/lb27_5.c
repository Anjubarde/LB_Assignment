/*
    Write a program which accept string from user and display it in 
    reverse order.

    Input : "MarvellouS"
    Output : "SuollevraM"
*/

void Reverse(char *str)
{
    int iStart = 0;  
    int iEnd = 0;    

    while(str[iEnd] != '\0') 
    {
        iEnd++;
    }
    iEnd--;  

    while(iStart < iEnd)
    {
        char temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }

    printf("Reversed String: %s\n", str);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string ");
    scanf("%[^'\n']s,arr");

    Reverse(arr);

    return 0;

}