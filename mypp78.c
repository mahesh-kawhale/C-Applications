// Write a program which accepts string from  user and count number of whitespaces

#include<stdio.h>

int StrCntSpace(char *str)
{
    int count=0;
    while(*str != '\0')
    {
        if(*str==' ')
        {
            count++;
            
        }
        str++; 
         
    }
    return count;

}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    iRet=StrCntSpace(arr);
    printf("The number of whitespaces are :%d\n",iRet);

    return 0;
}