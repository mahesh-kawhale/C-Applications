//Write a program which accepts number from user and return Smallest digit from number

#include<stdio.h>

////////////////////////////////////////////////////
// Function name:    SmallDigit
// Input:            Integer
// Output:           Integer
// Description:      return the Smallest digit from number
////////////////////////////////////////////////////   

int SmallDigit(int iNo)
{
    int iDigit=0;
    int iSmall=iNo % 10;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iSmall >= iDigit)
        {
            iSmall = iDigit;

        }

        iNo = iNo / 10;
    }
    
    return iSmall;

}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=SmallDigit(iValue);
    printf("The Smallest digit from number is %d\n",iRet);
   

    return 0;
}