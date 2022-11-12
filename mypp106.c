// program which copy data from one file to another newly created file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define FILESIZE 1024

void FileCopy(char Src[],char Dest[])
{
    int fdSrc=0,fdDest=0;
    char Buffer[FILESIZE];
    int iRet=0;

    fdSrc=open(Src,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open open file\n");
        return;
    }
    printf("file is open sucessfully....\n");

    fdDest=creat(Dest,0777);
    if(fdDest == -1)
    {
        printf("file is unable to create\n");
        return;
    }
    printf("file is create sucessfully.....\n");

    while((iRet=read(fdSrc,Buffer,FILESIZE)) != 0)
    {
        write(fdDest,Buffer,iRet);

    }

    close(fdSrc);
    close(fdDest);

}



int main()
{
    char src[20];
    char dest[20];

    printf("Enter the file name you want to open\n");
    scanf("%s",&src);

    printf("Enter the file name you want to create\n");
    scanf(" %s",&dest);

    FileCopy(src,dest);
    printf("file has copied sucessfully.......\n");


    return 0;
}