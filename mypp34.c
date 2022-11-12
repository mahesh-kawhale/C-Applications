//Write a program which accpts number from user and check whether that number contains a number in it
// or not

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////
// Function name:    SearchDigit
// Input:            Integer,Integer
// Output:           Boolean
// Description:      Used to check given digit is present or not
////////////////////////////////////////////////////   

bool SearchDigit(int iNo,int iSearch)
{
    int iDigit=0;
    bool bFlag=false;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if(iDigit==iSearch)
        {
            bFlag=true;
            break;

        }

        iNo=iNo / 10;
    }
    return bFlag;

}

int main()
{
    int iValue=0;
    int iNum=0;
    bool bRet=false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the digit to search\n");
    scanf("%d",&iNum);
    
    bRet=SearchDigit(iValue,iNum);
    if(bRet==true)
    {
        printf("The given %d digit is present\n",iNum);
    }
    else
    {
        printf("The given %d digit is not present\n",iNum);
    }


    return 0;
}