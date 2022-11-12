// write data into file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 

void WriteData(char Fname[],char Data[])
{
    int fd=0,iRet=0;

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("file is unable to open\n");
        return;
    }
    printf("file is opend sucessfully\n");
    

    iRet = write(fd,Data,strlen(Data));
    if(iRet== -1)
    {
        printf("Unable to write data\n");
        return;
    }
    printf("The number of bytes get sucessfully written are %d\n",iRet);

    close(fd);


}

int main()
{
    char Fname[20];
    char Data[100];
   
    printf("Enter the file you want to open\n");
    scanf("%s",&Fname);

    printf("Enter the data you want to write\n");
    scanf(" %[^'\n']s",&Data);

    WriteData(Fname,Data);

    

    return 0;
}