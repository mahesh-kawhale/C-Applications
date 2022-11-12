// program to Toggle the bit and update the number

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT; 

////////////////////////////////////////////////
// Function name:   ToggleBit
// Input:           Integer
// Output:          Integer
// Description:     Used to Toggle the bit
//////////////////////////////////////////////////

int ToggleBit(UINT iNo,int iPos)
{
    int iMask=0x00000001;
    int iResult=0;

    iMask=iMask << (iPos-1);

    iResult=iNo ^ iMask;

    return iResult;

    
}


int main()
{
    UINT iValue=0;
    int iPos=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the position of Bit\n");
    scanf("%d",&iPos);

    iRet=ToggleBit(iValue,iPos);

    printf("The upadated number is %d\n",iRet);
    


    return 0;
}