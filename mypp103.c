// program which count small letters from  a file
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int CountSmall(char Fname[])
{
    char Data[1024];
    int fd=0,iRet=0,i=0,iCnt=0;

    fd=open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("file is unable to open\n");
        return -1;
    }
    printf("file is open sucessfully....\n");

    while((iRet=read(fd,Data,sizeof(Data))) != 0)
    {
        for(i=0;i<iRet;i++)
        {
            if((Data[i] >= 'a') && (Data[i] <= 'z'))
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

    printf("Enter the file name you want to open\n");
    scanf("%s",&Fname);

    iRet=CountSmall(Fname);

    printf("The number of small letters are %d\n",iRet);

    

    return 0;
}