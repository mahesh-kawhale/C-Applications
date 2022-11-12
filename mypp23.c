// Write a program which accept number from user and Display its non factors

#include<stdio.h>
///////////////////////////////////////////////
// Function name: SumOfNonFact
// Input:         Integer
// Output:        Integer
// Description:   used to get Sum of non-factors of number
///////////////////////////////////////////////

int SumOfNonFact(int iNo)
{
    int iCnt=0,iSum=0;
    printf("The Non-Factors of number are...\n");
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
            iSum=iSum+iCnt;

        }
    }
    return iSum;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=SumOfNonFact(iValue);
    printf("The summation of all non-factors of numnber is %d\n",iRet);

    return 0;
}