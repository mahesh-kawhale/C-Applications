
// program to print number from one number to upto second number on screen
#include<stdio.h>

///////////////////////////////////
// Function name :   Display
// Input :           Integer,Integer
// Output :          Void
// Description :     used to print number one number to upto second number
// Author :          Mahesh Pratap Kawhale
/////////////////////////////////////
void Display(int iNo1,int iNo2)
{
    int i=0;
    
    for(i=iNo1;i<=iNo2;i++)
    {
        printf("%d   ",i);
    }

}

int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}