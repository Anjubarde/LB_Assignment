#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;           // File Descriptor
    char Name[30];

    printf("Please Enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDWR);       // Octor Number

    if(fd == -1)
    {
        printf("Uable to open file\n");
    }
    else
    {
        printf("File succesfully opened with FD %d\n", fd);
    }

    return 0;
}