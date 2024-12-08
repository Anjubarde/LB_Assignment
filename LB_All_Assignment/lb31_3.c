/* 
    Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.
    Input : "Marvellous Python 2"
    Output : "MARVELLOUS PYTHON 2"
*/

void StrCpyCap(char *src, char *dest)
{
    int i = 0;
    while(src[i] != '\0') 
    {
        dest[i] = iUpper(src[i]);
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr, brr);

    printf("%s",brr);

    return 0;
}