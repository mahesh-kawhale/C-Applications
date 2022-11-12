
// program to print n times 'Hello' on screen
#include<stdio.h>

///////////////////////////////////
// Function name :   Display
// Input :           Integer
// Output :          Void
// Description : used to print n times
// Author : Mahesh Pratap Kawhale
/////////////////////////////////////
void Display(int iCnt)
{
    int i=0;
    if(iCnt < 0)
    {
        iCnt=-iCnt;
    }
    for(i=0;i<iCnt;i++)
    {
        printf("Hello\n");
    }

}

int main()
{
    int iValue=0;
    printf("Enter the numnber of times you print\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}