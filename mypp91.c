// program to Check 3rd bit is ON or OFF ,if its OFF then ON it 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT; 

////////////////////////////////////////////////
// Function name:   ONBit
// Input:           Integer
// Output:          Integer
// Description:     Used to ON 3rd bit
//////////////////////////////////////////////////

int ONBit(UINT iNo)
{
    int iMask=0x00000004;
    int iResult=0;

    iResult=iNo | iMask;

    return iResult;
    

}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=ONBit(iValue);

    printf("Updated Number is %d",iRet);
   


    return 0;
}