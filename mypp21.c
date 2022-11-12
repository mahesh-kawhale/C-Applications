// Write a program which accept number from user and Display its factors in decreasing order

#include<stdio.h>
///////////////////////////////////////////////
// Function name: FactDec
// Input:         Integer
// Output:        Void
// Description:   used to get factors in decreasing order
///////////////////////////////////////////////

void FactDec(int iNo)
{

    int iCnt=0;
    for(iCnt=iNo/2;iCnt>=1;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);

        }
    }

}

int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    FactDec(iValue);

    return 0;
}