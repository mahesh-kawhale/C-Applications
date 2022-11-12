// Accept one number from user and check whether that number is divisible by 5 or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////
// function name:    CheckDiv
// input:            integer
// output:           BOOLEAN
// description:      Used to check number is divisible by 5
////////////////////////////////////////
BOOL CheckDiv(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if((iNo % 5==0))
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

    bRet=CheckDiv(iValue);
    if(bRet==TRUE)
    {
        printf("The given number is divisible by 5\n");
    }
    else
    {
        printf("The given number is not divisible by 5\n");
    }

    return 0;
}