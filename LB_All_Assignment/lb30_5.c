/*
    Accept division of student from user and depends on the division 
    display exam timing. There are 4 divisions in school as A,B,C,D. Exam
    of division A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM.
    (Application should be case insensitive)

    Input : C
    Output : Your exam at 9:20 AM

    Input : d
    Output : Your exam at 10:30 AM 
*/

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedular(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z') 
    {
        chDiv = chDiv - 'a' + 'A';  
    }

    
    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7:00 AM\n");
            break;
        case 'B':
            printf("Your exam at 8:30 AM\n");
            break;
        case 'C':
            printf("Your exam at 9:20 AM\n");
            break;
        case 'D':
            printf("Your exam at 10:30 AM\n");
            break;
        default:
            printf("Invalid division entered\n");
            break;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your Devision");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}