// Program to Count the number of digits in number
#include<stdio.h>
/////////////////////////////////////////////////
// Function name:  CountDigit
// Input:          Integer
// Output:         Integer
// Description:    Used to count the number of digits
//////////////////////////////////////////////////  
int CountDigit(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit=iNo%10;
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
 
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=CountDigit(iValue);
    printf("The number of digits is %d\n",iRet);


    return 0;
}