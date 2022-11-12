// Write a program which accepts string from user and count number of small characters
#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;

}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountSmall(Arr);
    printf("The number of Smallcase characters are: %d\n",iRet);

    return 0;
}