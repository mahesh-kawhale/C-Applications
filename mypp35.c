//Write a program which accpts number from user and check the frequency of digit in it

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////
// Function name:    ChkFrequency
// Input:            Integer,Integer
// Output:           Integer
// Description:      Used to count frequency of given digit
////////////////////////////////////////////////////   

int ChkFrequency(int iNo,int i)
{
    int iDigit=0,iCnt=0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if(iDigit==i)
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
    int iNum=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the digit to search\n");
    scanf("%d",&iNum);
    
    iRet=ChkFrequency(iValue,iNum);
    printf("The frquency of given digit is %d\n",iRet);
   

    return 0;
}