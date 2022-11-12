// program to display the even digits of number
#include<stdio.h>

////////////////////////////////////////
// Function name:     DisplayEven
// Input:             Integer
// Output:            Void
// Description:       Used to display the even digits
//////////////////////////////////////// 
void DisplayEven(int iNo)
{
    int iDigit=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if(iDigit % 2 == 0)
        {
            printf("%d\t",iDigit);
        }

        iNo = iNo/10;
    }

}


int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayEven(iValue);

    return 0;
}