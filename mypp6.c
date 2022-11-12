// program to Check number is Prime or not
#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////
// function name:    ChkPrime
// input:            integer
// output:           boolean
// description:      check number is prime or not
////////////////////////////////////////
bool ChkPrime(int iNo)
{
    int i=0,iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 1)
    {
        return false;
    }
    for(i=1;i<=iNo/2;i++)
    {
        if(iNo % i==0)
        {
            iCnt++;
        }
    }
    if(iCnt >= 2)
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

    printf("Enter the number to check...\n");
    scanf("%d",&iValue);

    bRet=ChkPrime(iValue);
    if(bRet==true)
    {
        printf("The given %d number is Prime\n");
    }
    else
    {
        printf("The given %d number is not Prime\n");
    }

    return 0;
}