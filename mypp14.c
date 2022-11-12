
// accept one number from user and print that number of * on screen
#include<stdio.h>

//////////////////////////////////////////////
// Function name: Display
// Input: Integer
// Output: Void
// Description: used to print number of * on screen
//////////////////////////////////////////////
void Display(int iValue)
{
    int i=0;
    for(i=1;i<=iValue;i++)
    {
        printf(" * ");
    }
}

int main()
{
    int iNo=0;
    printf("enter the number \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}