// Write a program which accept number from user and Display its multiplication of factors

#include<stdio.h>
///////////////////////////////////////////////
// Function name: MultiFact;
// Input:         Integer
// Output:        Integer
// Description:   used to get multiplication of factors
///////////////////////////////////////////////

int MultiFact(int iNo)
{
    int iMult=1;
    int iCnt=0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult=iMult*iCnt;

        }
    }
    return iMult;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=MultiFact(iValue);

    printf("The multipliaction of factors is %d\n",iRet);


    return 0;
}