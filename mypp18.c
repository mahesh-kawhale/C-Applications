// Accept one character from user and convert the case of character
#include<stdio.h>

//////////////////////////////////////////////
// Function name: ConvertCase;
// Input:         Character
// Output:        Character
// Description:   used to change case of character
//////////////////////////////////////////////

char ConvertCase(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue=cValue-32;
        return cValue;
    }
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue=cValue+32;
        return cValue;
    }
    

}

int main()
{
    char Ch='\0';

    printf("Enter the character\n");
    scanf("%c",&Ch);

    char cRet=ConvertCase(Ch);
    printf("The converted character is  %c\n",cRet);


    return 0;
}