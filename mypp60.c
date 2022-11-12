// Accept character from user and Convert it into Small Case
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////
// Function name:   SmallCase
// Input:           Character
// Output:          Character 
// Description:     Convert character into Small case
//////////////////////////////////////////////////
char SmallCase(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch=ch+32;
    }
    return ch;
    
}


int main()
{
    char cValue='\0';
    char cRet='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet=SmallCase(cValue);

    printf("The SmallCase of character is %c\n",cRet);
    

    return 0;
}