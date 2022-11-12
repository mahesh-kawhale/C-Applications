// program to check whether number is perfect or not
#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////
// Function name:  ChkPerfect
// Input:          Integer
// Output:         Boolean
// Description:    Used to check perfect or not
/////////////////////////////////////
bool ChkPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }
    for(iCnt==(iNo/2);iCnt>=1;iCnt--)   // reducing time complexity by revesing the loop
    {
        if(iNo % iCnt == 0)
        {
            iSum=iSum+iCnt;
        }
    }
    
    if(iSum==iNo)
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
    bool bRet=false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=ChkPerfect(iValue);
    if(bRet==true)
    {
        printf("Number is perfect\n");
    }
    else
    {
        printf("Number is not perfect\n");
    }


    return 0;
}