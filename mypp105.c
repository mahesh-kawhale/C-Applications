// program which count the whitespaces from a file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CountSpaces(char Fname[])
{
    int fd=0;
    int iRet=0,i=0,iCnt=0;
    char Data[1024];

    fd=open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet=read(fd,Data,sizeof(Data))) != 0)
    {
        for(i=0;i<=iRet;i++)
        {
            if(Data[i]==' ')
            {
                iCnt++;
            }
        }

    }

    close(fd);
    return iCnt;


}

int main()
{
    char Fname[20];
    int iRet=0;

    printf("Enter the filename you want to open\n");
    scanf("%s",Fname);

    iRet=CountSpaces(Fname);

    printf("The number of whitespaces are %d\n",iRet);



    return 0;
}