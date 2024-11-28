/*
    Accept character from user and display its ASCII value in decimal, octal and 
    hexadecimal format.

    Input: A
    Output: Decimal      65
            Octal        0101
            Hexadecimal  0X41
*/

void Display(char ch)
{
     int asciiValue = (int)ch; 
    
    printf("Decimal      %d\n", asciiValue);          
    printf("Octal        %o\n", asciiValue);          
    printf("Hexadecimal  0X%X\n", asciiValue);
}

int main()
{
    char cValue = 0;

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}