/* 
    Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.
    Input : "Marvellous Python 2"
    Output : "marvellous python 2"
*/

void StrCpySmall(char *src, char *dest)
{
    int i = 0;
    
    while(src[i] != '\0') 
    {
        dest[i] = iLower(src[i]);
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char arr[30] = "marvellous Python 2";
    char brr[30];

    StrCpySmall(arr, brr);

    printf("%s",brr);

    return 0;
}