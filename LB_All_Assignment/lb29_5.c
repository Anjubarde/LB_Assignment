/*
    Write a program which accept string from user reverse that string in 
    place.

    Input : "abcd"
    Output : "dcba"

    Input : "abba"
    Output : "abba"
*/

void StrRevX(char *str)
{
     int left = 0;
    int right = 0;

    while(str[right] != '\0') 
    {
        right++;
    }
    right--;  

    
    while(left < right) 
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char arr[20];
    
    printf("Enter the string");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;
}