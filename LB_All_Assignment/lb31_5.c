/* 
    Write a program which accept string from user and copy that characters of that string into another string by toggling the case.
    Input : "Marvellous Python 2"
    Output : "mARVELLOUS pYTHON 2"
*/

void StrCpyToggle(char *src, char *dest)
{
    int i = 0;

    while(src[i] != '\0') 
    {
        if(src[i] >= 'a' && src[i] <= 'z') 
        {
            dest[i] = src[i] - 32;
        }
        else if(src[i] >= 'A' && src[i] <= 'Z') 
        {
            dest[i] = src[i] + 32;
        }
        else 
        {
            dest[i] = src[i];
        }
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char arr[30] = "marvellous Python 2";
    char brr[30];

    StrCpytoggle(arr, brr);

    printf("%s",brr);

    return 0;
}