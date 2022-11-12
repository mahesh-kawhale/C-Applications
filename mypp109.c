// program which display only 5 characters from a file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20];
    int fd=0;
    char Data[10];

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }
   
    lseek(fd,-5,0);

    read(fd,Data,5);
    write(1,Data,5);
    
    return 0;
}