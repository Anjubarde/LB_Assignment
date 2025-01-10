/*
    Write a program which acepts file name from user and count number of white spaces from that file.
    Input : Demo.txt
    Output : Number of white space are 13
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>   
#include <unistd.h>  
#include<io.h>   

int CountWhite(char FName[]) 
{
    int fd = 0;
    int iNo = 0;
    int iCnt = 0;
    char Arr[50];  

    fd = open(FName, O_RDONLY);
    
    if(fd == -1) 
    {
        printf("Unable to open the file\n");
        return -1; 
    }

    iNo = read(fd, Arr, sizeof(Arr) - 1);  
    if(iNo == -1) 
    {
        printf("Unable to read the file\n");
        close(fd);
        return -1;
    }
    
    Arr[iNo] = '\0';

    for(int i = 0; i < iNo; i++) 
    {
        if((Arr[i]) == ' ') 
        { 
            iCnt++;
        }
    }

    close(fd);

    return iCnt;
}

int main() 
{
    char Name[30];
    int iRet = 0;

    printf("Please Enter the file name that you want to open: ");
    scanf("%[^'\n']s", Name);

    iRet = CountWhite(Name); 
    
    printf("Number of WhiteSpace characters are %d\n", iRet);

    return 0;
}
