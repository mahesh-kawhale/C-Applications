// Accept character from user and toggle the case of that character
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////
// Function name:   ToggleCase
// Input:           Character
// Output:          Character 
// Description:     Toggle the case of character
//////////////////////////////////////////////////
char ToggleCase(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch=ch+32;
        return ch;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch=ch-32;
        return ch;
    }
    
}


int main()
{
    char cValue='\0';
    char cRet='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet=ToggleCase(cValue);

    printf("The updated character is %c\n",cRet);
    

    return 0;
}