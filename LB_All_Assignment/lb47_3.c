#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[20];
    int fd = 0;

    printf("Please Enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    read(fd,Arr,8);

    printf("Data from the file is : %s\n",Arr);

    return 0;
}