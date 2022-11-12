// progarm which accept number from user and return diffrence between summation of its factors 
// Non-Factors

#include<stdio.h>
//////////////////////////////////////////////////
// Function name: FactDiff
// Input:         Integer
// Output:        Integer
// Description:   used to get difference between factors and nonfactors
//////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt=0;
    int iFactSum=0;
    int iNonFactSum=0,iFactDiff=0;

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("Non-Factor : %d\n",iCnt);
            iNonFactSum=iNonFactSum+iCnt;
            
        }
        else
        {
            printf("Factor : %d\n",iCnt);
            iFactSum=iFactSum+iCnt;
        }
    }
    if(iNonFactSum < iFactSum)
    {
        return iFactSum-iNonFactSum;

    }
    else
    {
        return iNonFactSum-iFactSum;
    }
}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    iRet=FactDiff(iValue);

    printf("The Diffrence is %d\n",iRet);


    return 0;
}