// Accept character from user and check that character is alphabet or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
////////////////////////////////////////////////
// Function name:   ChkAlphabet
// Input:           Character
// Output:          BOOLEAN
// Description:     Check character is alphabet or not
//////////////////////////////////////////////////
BOOL ChkAlphabet(char ch)
{
    if((ch >= 65) && (ch <= 90))
    {
        return TRUE;
    }
    else if((ch >= 97) && (ch <= 122))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}


int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkAlphabet(cValue);
    if(bRet==TRUE)
    {
        printf("It is alphabet\n");
    }
    else
    {
        printf("It is not alphabet\n");
    }

    return 0;
}