// program to check armstrong number
#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo)    //153
{
    int iDigit=0,iCnt=0,iCube=1,iSum=0;
    int iTemp=iNo;
    while(iNo != 0)
    {
        iCube=1;
        iDigit=iNo % 10;                 //3   5
        for(iCnt=1;iCnt<=3;iCnt++)
        {
            iCube=iCube*iDigit;
        }
        iSum=iSum+iCube;
        iNo=iNo/10;           //15
        
    }
    if(iTemp==iSum)
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
    int iNo=0;
    bool bRet;

    printf("Enter the numnber\n");
    scanf("%d",&iNo);

    bRet=ChkArmstrong(iNo);

    if(bRet==true)
    {
        printf("Number is armstrong number\n");
    }
    else
    {
        printf("Number is not armstrong numnber\n");
    }



    return 0;
}