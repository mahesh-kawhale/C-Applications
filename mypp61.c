// Accept character from user and Check whether it is digit or not
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////
// Function name:   ChkDigit
// Input:           Character
// Output:          Boolean 
// Description:     Check character is digit or not
//////////////////////////////////////////////////
bool ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


int main()
{
    char cValue='\0';
    bool bRet='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkDigit(cValue);

    if(bRet==true)
    {
        printf("The character is digit\n");
    }
    else
    {
        printf("The character is not digit\n");
    }
    

    return 0;
}