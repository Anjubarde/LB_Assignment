/*
    Write a program which accept string from user and check whether it 
    contains vowels in it or not.

    Input : "Mavellous"
    Output : TRUE

    Input : "xyz"
    Output : FALSE

    Input : "Demo"
    Output : TRUE
*/

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
      while (*str != '\0') // Continue until we reach the end of the string
    {
        // Check if the character is a vowel (both lowercase and uppercase)
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE; // Return TRUE if a vowel is found
        }
        str++;  // Move to the next character in the string
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;

}