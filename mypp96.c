// program to create new file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
    char Fname[20];
    int fd=0;

    printf("Enter the filename to create\n");
    scanf("%s",&Fname);

    fd=creat(Fname,0777);
    if(fd==-1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("file is created suceesfully with fd %d\n",fd);

    close(fd);


    return 0;
}