// program to find the filelength
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 

int FileLength(char Fname[])
{
    int fd=0,iSum=0,iRet=0;
    char Data[100];

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("file is not opened\n");
        return -1;
    }
    printf("File is open sucessfully........\n");

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        iSum=iSum+iRet;

    }

    return iSum;

}


int main()
{
    char Fname[20];
    int Flen=0;

    printf("Enter the file name\n");
    scanf("%s",&Fname);

    Flen=FileLength(Fname);

    printf("The length of file is %d bytes\n",Flen);


    return 0;
}