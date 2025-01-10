/*
    Write a program which acepts file name and one count from user and read that number of charaters from starting position.
    Input : Demo.txt
    Output : Display first 12 characters from Demo.txt 
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>   
#include <unistd.h>  
#include<io.h>   

void DisplayN(char FName[], int iSize) 
{
    int fd = 0;
    int iNo = 0;
    int iCnt = 0;
    char Arr[50];  

    fd = open(FName, O_RDONLY);
    
    if(fd == -1) 
    {
        printf("Unable to open the file\n");
        return; 
    }

    iNo = read(fd, Arr, iSize);  
    if(iNo == -1) 
    {
        printf("Unable to read the file\n");
        close(fd);
        return;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c",Arr[iCnt]);
    }
    printf("\n");

    close(fd);
}

int main() 
{
    char FileName[30];
    int iValue = 0;

    printf("Enter File Name : ");
    scanf("%s",FileName);

    printf("Enter the Number of Characters : ");
    scanf("%d",&iValue);

    DisplayN(FileName, iValue);

    return 0;
}
