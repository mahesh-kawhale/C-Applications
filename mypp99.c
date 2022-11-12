//program which is used to display the data from file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 

void Display(char Fname[])
{
    int fd=0,iRet=0;
    char Data[100];

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("file is unable to open\n");
        return -1;
    }
    printf("file is opend sucessfully\n");

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,iRet);

    }

    close(fd);

}


int main()
{
    char Fname[20];
    
    printf("Enter the file you want to open\n");
    scanf("%s",&Fname);

    Display(Fname);


    
    return 0;
}