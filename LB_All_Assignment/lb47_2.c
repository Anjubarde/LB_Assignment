#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;           // File Descriptor
    char Name[30];

    printf("Please Enter the file name that you want to create\n");
    scanf("%[^'\n']s",Name);

    fd = creat(Name,0777);       // Octor Number

    if(fd == -1)
    {
        printf("Uable to create file\n");
    }
    else
    {
        printf("File succesfully created with FD %d\n", fd);
    }

    return 0;
}
