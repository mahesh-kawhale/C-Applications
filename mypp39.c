//Write a program which accepts number from user and return highest digit from number

#include<stdio.h>

//////////////////////////////////////////////////
// Function name:    BigDigit
// Input:            Integer
// Output:           Integer
// Description:      return the highest digit from number
////////////////////////////////////////////////////   

int BigDigit(int iNo)
{
    int iDigit=0,iBig=0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iBig = iDigit;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iBig <= iDigit)
        {
            iBig = iDigit;

        }

        iNo = iNo / 10;
    }
    
    return iBig;

}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=BigDigit(iValue);
    printf("The Highest digit from number is %d\n",iRet);
   

    return 0;
}