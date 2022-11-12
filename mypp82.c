// Write a program which accepts string from user and copy that characters of string
// from one to another in reverse order

#include<stdio.h>

void StrCopyRev(char *src,char *dest) 
{
    char *start=src;
    char *end=src;
    int temp=0;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }

    while(*src != '\0')
    {
        *dest=*src;
        src++;
        dest++;

    }
    *dest = '\0';
    //src++;

}


int main()
{
    char arr[20];
    char brr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    StrCopyRev(arr,brr);
    printf("string after copying in reverse order %s\n",brr);


    return 0;
}