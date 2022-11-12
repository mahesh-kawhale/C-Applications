// program which is used to concate the second string after the first

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
    
    while(*src != '\0')
    {
        src++;

    }

    while(*dest != '\0')
    {
        *src=*dest;
        src++;
        dest++;

    }
    *src = '\0';

}


int main()
{
    char arr[50];
    char brr[30];

    printf("Enter the first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Enter the second string\n");
    scanf(" %[^'\n']s",brr);

    StrCatX(arr,brr);

    printf("String after the concatation is: \n"); 
    printf("%s",arr);
    


    return 0;
}