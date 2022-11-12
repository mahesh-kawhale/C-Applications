// write a program which accepts string from user and copy that characters from 
// string without whitespaces

#include<stdio.h>

void StrCopyNospaces(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src == ' ')
        {
            src++;
        }
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

}

int main()
{
    char arr[20];
    char brr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    StrCopyNospaces(arr,brr);
    printf("The string after copy is %s",brr);


    return 0;
}