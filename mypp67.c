// Write a program which accepts string from user and whether it contains vowels or not

#include<stdio.h>
typedef int BOOL;
#define True 1    
#define False 0


////////////////////////////////////////////////
// Function name:   ChkVowel
// Input:           Character pointer
// Output:          BOOLEAN
// Description:     return true if vowel is present and false if not present
//////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||
        (*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            iCnt++;
        }

        str++;
    }

    if(iCnt >= 1)
    {
        return True;
    }
    else
    {
        return False;
    }
}


int main()
{
    char Arr[20];
    BOOL bRet=False;

    printf("Enter string\n");
    scanf("%[^'\n']s",&Arr);

    bRet=ChkVowel(Arr);

    if(bRet==True)
    {
        printf("Vowel is present\n");
    }
    else
    {
        printf("Vowel is not present\n");
    }
   

    return 0;
}