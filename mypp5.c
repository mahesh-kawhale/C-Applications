// program to Check number is divisible by 3 and 5
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////
// function name:    Check
// input:            integer
// output:           BOOLEAN
// description:      check number is divisible by 3 and 5
////////////////////////////////////////
BOOL Check(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if((iNo % 3==0) && (iNo % 5==0))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }


}


int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the number to check...\n");
    scanf("%d",&iValue);

    bRet=Check(iValue);
    if(bRet==TRUE)
    {
        printf("The given number is divisible by 3 and 5\n");
    }
    else
    {
        printf("The given number is not divisible by 3 and 5\n");
    }

    return 0;
}