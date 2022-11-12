// program to check bit ON or OFF of any bit you want

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT; 

////////////////////////////////////////////////
// Function name:   ChkBit
// Input:           Integer
// Output:          Boolean
// Description:     Used to Check the bit
//////////////////////////////////////////////////

bool ChkBit(UINT iNo,int iPos)
{
    int iMask=0x00000001;
    int iResult=0;

    iMask=iMask << (iPos-1);

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
    int iPos=0;
    bool bRet=false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the position of Bit\n");
    scanf("%d",&iPos);

    bRet=ChkBit(iValue,iPos);
    if(bRet==true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }


    return 0;
}