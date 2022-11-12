// Accept character from user and check that character is SmallCase or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
////////////////////////////////////////////////
// Function name:   ChkSmallCase
// Input:           Character
// Output:          BOOLEAN
// Description:     Check character is SmallCase or not
//////////////////////////////////////////////////
BOOL ChkSmallCase(char ch)
{
    if((ch >= 97) && (ch <= 122))
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

    bRet=ChkSmallCase(cValue);
    if(bRet==TRUE)
    {
        printf("It is Small case\n");
    }
    else
    {
        printf("It is not Small case\n");
    }

    return 0;
}