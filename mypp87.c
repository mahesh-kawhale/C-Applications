// program to Check 10th bit is ON or OFF 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT; 

////////////////////////////////////////////////
// Function name:   ChkBit
// Input:           Integer
// Output:          Boolean
// Description:     Used to check 10th bit is ON or OFF
//////////////////////////////////////////////////

bool ChkBit(int iNo)
{
    int iMask=0x00000200;
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
    int iValue=0;
    bool bRet=false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    if(bRet==true)
    {
        printf("10th Bit is ON\n");
    }
    else
    {
        printf("10th Bit is OFF\n");
    }


    return 0;
}