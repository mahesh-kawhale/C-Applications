// Program which Toggle the case of character
#include<stdio.h>

////////////////////////////////////////////////
// Function name:   StrToggleX
// Input:           Character pointer
// Output:          Void
// Description:     Toggle the case of string
//////////////////////////////////////////////////
void StrToggleX(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            *str=*str+32;
        }
        else if((*str >= 97) && (*str <= 122))
        {
            *str=*str-32;
        }

        str++;
    }

}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StrToggleX(Arr);
    printf("The Updated string is : %s\n",Arr);

    return 0;
}