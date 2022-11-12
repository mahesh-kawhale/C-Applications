// proram which compares the data of files
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdbool.h>
#define FILESIZE 1024

bool FileComp(char File1[],char File2[])
{
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];
    int fd1=0,fd2=0,iCmp=0;
    int iRet1=0,iRet2=0,i=0;


    fd1=open(File1,O_RDONLY);
    if(fd1==-1)
    {
        printf("file1 is unable to open\n");
    }
    printf("File1 is open sucessfully.....\n");

    fd2=open(File2,O_RDONLY);
    if(fd2==-1)
    {
        printf("file2 is unable to open\n");
    }
    printf("File2 is open sucessfully.....\n");

    while(1)
    {
        iRet1=read(fd1,Buffer1,FILESIZE);
        iRet2=read(fd2,Buffer2,FILESIZE);

        if((iRet1==0) || (iRet2==0) || (iRet1 != iRet2))
        {

            break;
        }

        iCmp=memcmp(Buffer1,Buffer2,iRet1);
        if(iCmp != 0)
        {
            break;
        } 
    }

    if(iRet1==0 && iRet2==0)
    {
        return true;
    }
    else
    {
        return false;
    }


    close(fd1);
    close(fd2);
}



int main()
{
    char Fname1[20];
    char Fname2[20];
    bool bRet=false;

    printf("Enter the name of first file\n");
    scanf("%s",&Fname1);
    
    printf("Enter the name of second file\n");
    scanf("%s",&Fname2);

    bRet=FileComp(Fname1,Fname2);

    if(bRet==true)
    {
        printf("Files are equal....\n");
    }
    else
    {
        printf("Files are not equal....\n");
    }


    return 0;
}