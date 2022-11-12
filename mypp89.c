// write a program which checks whether 5th or 18th Bit is ON or OFF 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

////////////////////////////////////////////////
// Function name:   ChkBit
// Input:           Unsigned Integer,Integer
// Output:          Boolean
// Description:     Used to check 5th and 18th bit is ON or OFF
//////////////////////////////////////////////////
bool ChkBit(UINT iNo,int iMask)
{
    int iResult=0;

    iResult=iNo & iMask;
    if(iResult==0)
    {
        return false;
    }
    else
    {
        return true;
    }


}

int main()
{
    UINT iValue=0;
    bool bRet=false;
  
    int iMask1=0x00000010;
    int iMask2=0x00020000;

    printf("enter the number\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue,iMask1);
    if(bRet==true)
    {
        printf("5th bit is ON\n");
    }
    else
    {
        printf("5th bit is OFF\n");
    }

    bRet=ChkBit(iValue,iMask2);
    if(bRet==true)
    {
        printf("18th bit is ON\n");
    }
    else
    {
        printf("18th bit is OFF\n");
    }

    

    return 0;
}