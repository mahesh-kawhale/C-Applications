// program which is used to copy Small characters from one string to another

#include<stdio.h>

void StrCopySmallX(char *Src,char *Dest)
{
    while(*Src != '\0')
    {
        if((*Src >= 'a') && (*Src <= 'z'))
        {
            *Dest=*Src;
            Dest++;
        }

        Src++;
    }
    
    *Dest='\0';

}


int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the first string\n ");
    scanf("%[^'\n']s",Arr);

    StrCopySmallX(Arr,Brr);

    printf("The data from Brr string is :%s",Brr);


    return 0;
}