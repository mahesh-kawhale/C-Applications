// program which create a new file and open that file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd=0;

    printf("Enter the file you want to create\n");
    scanf("%s",&Fname);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("file is created successfully\n");

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("file is unable to open\n");
        return -1;
    }
    printf("file is opened sucessfully\n");

    close(fd);
    

    return 0;
}