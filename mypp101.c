// program to append the data into file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 

void AppendData(char Fname[],char Data[])
{
    int fd=0,iSum=0,iRet=0;

    fd = open(Fname,O_RDONLY | O_APPEND);
    if(fd == -1)
    {
        printf("file is not opened\n");
        return;
    }
    printf("File is open sucessfully........\n");

    iRet=write(fd,Data,strlen(Data));
    if(iRet == -1)
    {
        printf("Data append is not done.....\n");
        return;
    }

    printf("Data append sucessfully.........\n");

}


int main()
{
    char Fname[20];
    char Data[100];

    printf("Enter the file name\n");
    scanf("%s",&Fname);

    printf("Enter the data you want to append\n");
    scanf(" %[^'\n']s",&Data);

    AppendData(Fname,Data);


    return 0;
}