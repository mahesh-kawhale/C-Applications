// write program which accepts string from user and accept one character from user
// return the frequency of that character

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *Str,int Ch)
{
    bool bFlag=false;
    while(*Str != '\0')
    {
        if(*Str == Ch)
        {
            bFlag=true;
    
        }
        Str++;
    }

    return bFlag;

}

int main()
{
    char Arr[20];
    char cValue='\0';
    bool bRet=false;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet=ChkChar(Arr,cValue);
    if(bRet==true)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }


    return 0;
}