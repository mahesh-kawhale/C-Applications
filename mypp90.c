// write a program which checks whether 7, 15, 21, 27th Bit is ON or OFF 

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////
// Function name:   ChkBit
// Input:           unsigned Integer,Integer
// Output:          Boolean
// Description:     Used to check 7th,15th,21th and 27th bit is ON or OFF
//////////////////////////////////////////////////

BOOL ChkBit(UINT iNo,int iMask)
{
    int iResult=0;
    iResult=iNo & iMask;

    if(iResult == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
   

}

int main()
{
    UINT iValue=0;
    BOOL bRet;

    int iMask1=0X00000040;
    int iMask2=0X00004000;
    int iMask3=0X00100000;
    int iMask4=0X08000000;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue,iMask1);

    if(bRet==TRUE)
    {
        printf("7th Bit is ON\n ");
        
    }
    else
    {
        printf("7thBit is OFF\n");
    }

    bRet=ChkBit(iValue,iMask2); 
    if(bRet==TRUE)
    {
        printf(" 15th Bit os ON\n");
    }
    else
    {
        printf("15th Bit is OFF\n");
    }
    
    bRet=ChkBit(iValue,iMask3); 
    if (bRet==TRUE)
    {
        printf("21th Bit is ON\n ");
        
    }
    else
    {
        printf("21thBit is OFF\n");
    }
    
    bRet=ChkBit(iValue,iMask4); 
    if(bRet==TRUE)
    {
        printf("27th Bit os ON\n");
    }
    else
    {
        printf("27th Bit is OFF\n");
    }
    

    return 0;
}
