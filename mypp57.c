// Accept character from user and check that character is Capital or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
////////////////////////////////////////////////
// Function name:   ChkCapital
// Input:           Character
// Output:          BOOLEAN
// Description:     Check character is Capital or not
//////////////////////////////////////////////////
BOOL ChkCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))
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

    bRet=ChkCapital(cValue);
    if(bRet==TRUE)
    {
        printf("It is Capital case\n");
    }
    else
    {
        printf("It is not Capital case\n");
    }

    return 0;
}