// program which count the character from file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CountChar(char Fname[],char Ch)
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
            if(Data[i]==Ch)
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
    char cValue='\0';

    printf("Enter the filename you want to open\n");
    scanf("%s",Fname);

    printf("Enter the character you want to count\n");
    scanf(" %c",&cValue);

    iRet=CountChar(Fname,cValue);

    printf("The Occurence are %d times\n",iRet);



    return 0;
}