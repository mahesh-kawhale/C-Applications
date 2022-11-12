// program to check number is odd or not
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////
// function name:    CheckOdd
// description:      check the number is odd or not 
// input:            integer
// output:           boolean
///////////////////////////////////////////
bool CheckOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return false;
    }
    if(iNo % 2 != 0)
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
    bool bRet;

    printf("Enter the number upto which you want to print\n");
    scanf("%d",&iValue);

    bRet=CheckOdd(iValue);
    if(bRet==true)
    {
        printf("The number is Odd\n");
    }
    else
    {
        printf("The number is not Odd\n");
    }

    return 0;
}