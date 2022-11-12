// Program which convert string into LowerCase
#include<stdio.h>

////////////////////////////////////////////////
// Function name:   StrLowX
// Input:           Character pointer
// Output:          Void
// Description:     Convert the string into LowerCase
//////////////////////////////////////////////////
void StrLowX(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            *str=*str+32;
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

    StrLowX(Arr);
    printf("The Updated string is : %s\n",Arr);

    return 0;
}