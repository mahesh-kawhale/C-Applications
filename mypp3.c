// program to check number is Even or not
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////
// function name: CheckEven
// description:   check the number is Even or not 
// input:         integer
// output:        boolean
///////////////////////////////////////////
bool CheckEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return false;
    }
    if(iNo % 2==0)
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

    bRet=CheckEven(iValue);
    if(bRet==true)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is not Even\n");
    }

    return 0;
}