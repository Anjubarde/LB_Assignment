/*
    Write a program which acepts file name and one characters from  user and count number of occurences of that characters from that file.
    Input : Demo.txt
    Output : Frequency of M is 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>   
#include <unistd.h>  
#include<io.h>   

int CountChar(char FName[]) 
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
        if((Arr[i]) == 'M') 
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

    iRet = CountChar(Name); 
    
    printf("Number of M characters are %d\n", iRet);

    return 0;
}
