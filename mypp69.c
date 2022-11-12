// Write a program which accepts string from user and calculate the length of string
#include<stdio.h>

////////////////////////////////////////////////
// Function name:   StrLenX
// Input:           Character pointer
// Output:          Integer
// Description:     return the length of string
//////////////////////////////////////////////////
int StrLenX(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }

    return iCnt;

}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet=StrLenX(Arr);
    printf("The Length of string is : %d\n",iRet);

    return 0;
}