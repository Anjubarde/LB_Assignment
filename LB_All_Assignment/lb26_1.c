/*
    Write a program which displays ASCII table. Table contains symbol, Decimal, 
    Hexadecimal and Octal representation of every member from 0 to 255.
*/

void DisplayASCII()
{
    printf("------------------------------------------------------------\n");
    printf("| Decimal | Hexadecimal | Octal | Symbol |\n");
    printf("------------------------------------------------------------\n");
    
    for(int i = 0; i <= 255; i++) 
    {
        char symbol = (i >= 32 && i <= 126) ? (char)i : ' ';
        
        printf("| %7d | %11X | %5o |    %c   |\n", i, i, i, symbol);
    }
    
    printf("------------------------------------------------------------\n");
}

int main()
{

    DisplayASCII();
    return 0;
}