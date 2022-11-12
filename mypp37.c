//Write a program which accpts number from user and count the digits which are between 1 and 5

#include<stdio.h>

//////////////////////////////////////////////////
// Function name:    ChkFrequency
// Input:            Integer
// Output:           Integer
// Description:      Used to count frequency of digits between 1 and 5
////////////////////////////////////////////////////   

int ChkFrequency(int iNo)
{
    int iDigit=0,iCnt=0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if((iDigit >= 1) && (iDigit <= 5))
        {
            iCnt++;
        }

        iNo=iNo / 10;
    }
    return iCnt;

}

int main()
{
    int iValue=0,iRet=0;


    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=ChkFrequency(iValue);
    printf("The frquency of digits between 1 and 5 is %d\n",iRet);
   

    return 0;
}