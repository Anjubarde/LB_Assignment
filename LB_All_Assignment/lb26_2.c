/*
    Accept character from user. If character is small display its corresponding capital 
    character, and if it small then display its corresponding capital character, and if it 
    small then display its corresponding capital. In other cases display as it is.
*/

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z') 
    {
        printf("Corresponding uppercase: %c\n", ch - 'a' + 'A');
    }
    else if(ch >= 'A' && ch <= 'Z') 
    {
        printf("Corresponding lowercase: %c\n", ch - 'A' + 'a');
    }
    else 
    {
        printf("The character is: %c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}