// program to find the sum of even digits of number
#include<stdio.h>

////////////////////////////////////////
// Function name:     SumOfEven
// Input:             Integer
// Output:            Integer
// Description:       return the sum of even digits
//////////////////////////////////////// 
int SumOfEven(int iNo)
{
    int iDigit=0,iSum=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum=iSum+iDigit;
        }

        iNo = iNo/10;
    }
    return iSum;

}


int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=SumOfEven(iValue);
    printf("The sum of even digits is %d\n",iRet);

    return 0;
}