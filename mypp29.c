// program to Sum of the digits of number
#include<stdio.h>

///////////////////////////////////////
// Function name:     SumOfDigits
// Input:             Integer
// Output:            Integer
// Description:       Used to sum of digits of number
/////////////////////////////////////// 
int SumOfDigits(int iNo)
{
    int iDigit=0;
    int iSum=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit=iNo % 10;
        iSum=iSum+iDigit;
        iNo = iNo/10;
    }
    return iSum;
}


int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=SumOfDigits(iValue);
    printf("The sum of digits is %d\n",iRet);

    return 0;
}