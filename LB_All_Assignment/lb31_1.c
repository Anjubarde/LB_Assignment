/* 
    Write a program which accept string from user and copy that characters of that string into another string in reverse order.
    Input : "Marvellous Python"
    Output : "nohtyP suollevraM"
*/

void StrCpyRev(char *src, char *dest)
{
    int i = 0;
    int ilength = 0;

    while(src[ilength] != '\0') 
    {
        ilength++;
    }

    for(i = 0; i < ilength; i++) 
    {
        dest[i] = src[ilength -i - 1];
    }
    dest[i] = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s",brr);

    return 0;
}