// Program which convert string into UpperCase
#include<stdio.h>

////////////////////////////////////////////////
// Function name:   StrUpX
// Input:           Character pointer
// Output:          Void
// Description:     Convert the string into UpperCase
//////////////////////////////////////////////////
void StrUpX(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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

    StrUpX(Arr);
    printf("The Updated string is : %s\n",Arr);

    return 0;
}