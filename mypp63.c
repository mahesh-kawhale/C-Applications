// Accept the character from user and display its ASCII values in different format 
#include<stdio.h>

void DisplayAscii(char ch)
{
    printf("The ascii values of the %c are:\n",ch );
    printf("In decimal format is: %d\n",ch);
    printf("In octal format is : %o\n",ch);
    printf("In hexadecimal format is :%x\n",ch);


}

int main()
{
    char cValue='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    DisplayAscii(cValue);


    return 0;
}