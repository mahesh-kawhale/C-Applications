// write a program which accepts string from user and copy that characters of that string
// into another string by converting all capital characters into small case
#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *src=*src+32;

        }
        
        *dest = *src;
        src++;
        dest++;
    
    }
    *dest='\0';

}

int main()
{
    char arr[30];
    char brr[30];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    StrCpySmall(arr,brr);

    printf("%s\n",brr);
    

    return 0;
}