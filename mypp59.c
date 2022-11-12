// Accept character from user and Convert it into Capital Case
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////
// Function name:   ChkCapital
// Input:           Character
// Output:          Character 
// Description:     Convert character into capital case
//////////////////////////////////////////////////
char CapitalCase(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch=ch-32;
    }
    return ch;
    
}


int main()
{
    char cValue='\0';
    char cRet='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet=CapitalCase(cValue);

    printf("The CapitalCase of character is %c\n",cRet);
    

    return 0;
}