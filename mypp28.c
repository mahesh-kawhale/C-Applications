// program to Display the digits of number
#include<stdio.h>

/////////////////////////////////////
// Function name:     Display
// Input:             Integer
// Output:            Void
// Description:       Used to display the digits of number
/////////////////////////////////////// 
void Display(int iNo)
{
    int iDigit=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit=iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo/10;

    }
}

int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}