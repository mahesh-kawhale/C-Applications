//Write a program which accpts number from user and return the multipication of digits 

#include<stdio.h>

//////////////////////////////////////////////////
// Function name:    MultiDigits
// Input:            Integer
// Output:           Integer
// Description:      return the multiplication of all digits
////////////////////////////////////////////////////   

int MultiDigits(int iNo)
{
    int iDigit=0,iMult=1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }
    
    return iMult;

}

int main()
{
    int iValue=0,iRet=0;


    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=MultiDigits(iValue);
    printf("The Multiplication of digits is %d\n",iRet);
   

    return 0;
}