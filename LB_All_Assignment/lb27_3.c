/*
    Write a program which accept string from user and return difference 
    between frequency of small characters and frequency of capital 
    characters.

    Input : "Marvellous"
    Output : 6  (8-2)
*/

int Difference(char *str)
{
    int iCnt = 0;
    int sCount = 0;   
    int cCount = 0; 

    while(*str != '\0') 
    {
        if(*str >= 'a' && *str <= 'z')
        {
            sCount++;  
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            cCount++;  
        }
        str++;  
    }

    return sCount - cCount;

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}