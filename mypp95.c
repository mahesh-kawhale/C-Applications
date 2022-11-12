// write a program which checks whether 1th and 32th Bit is ON or OFF 

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,int iMask)
{
    int iResult=0;

    iResult=iNo & iMask;
    
    if(iResult==0)
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
    BOOL bRet=FALSE;

    int iMask1=0X00000001;
    int iMask2=0X80000000;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue,iMask1);

    if (bRet==TRUE)
    {
        printf("first Bit is ON\n ");
        
    }
    else
    {
        printf("first Bit is OFF\n");
    }
    
    bRet=ChkBit(iValue,iMask2);
    if(bRet==TRUE)
    {
        printf(" last Bit os ON\n");
    }
    else
    {
        printf("last Bit is OFF\n");
    }
    

    return 0;
}
