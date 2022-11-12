// programn to check number is pallindrome or not
#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////
// Function name:   ChkPallindrome
// Input:           Integer
// Output:          Boolean
// Description:     Used to check pallindrome or not
///////////////////////////////////////
bool ChkPallindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iTemp=iNo;
    while(iNo != 0)
    {
        iDigit=iNo % 10;

        iRev=iRev*10+iDigit;

        iNo=iNo/10;

    }
    if(iTemp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=ChkPallindrome(iValue);
    if(bRet==true)
    {
        printf("Number is pallindrome\n");
    }
    else
    {
        printf("Number is not pallindrome\n");
    }



    return 0;
}