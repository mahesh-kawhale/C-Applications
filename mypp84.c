// program which copy the data from one string into another by toggling the case of that
// character
#include<stdio.h>

void StrCpyToggleX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *src=*src-32;

        }
        else if((*src >= 'A') && (*src <= 'Z'))
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
    
    StrCpyToggleX(arr,brr);

    printf("%s\n",brr);
    

    return 0;
}