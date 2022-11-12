// program which is used to compare the two strings
#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////
// Function name:   StrCompX
// Input:           Character pointer,character pointer
// Output:          Boolean
// Description:     compare two strings
//////////////////////////////////////////////////

bool StrCompX(char *Str1,char *Str2)
{
    int iCnt=0;
    while(*Str1 != '\0')
    {
        if(*Str1 != *Str2)
        {
            iCnt++;
            break;

        }
        Str1++;
        Str2++;

    }
    if(iCnt >= 1 )
    {
        return false;
    }
    else
    {
        return true;
    }
    
}


int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet=false;

    printf("Enter the first string\n ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the second string\n ");
    scanf(" %[^'\n']s",Brr);

    bRet=StrCompX(Arr,Brr);
    if(bRet==true)
    {
        printf("Two strings are equal\n");
    }
    else
    {
        printf("Two strings are not equal\n");
    }


    return 0;
}