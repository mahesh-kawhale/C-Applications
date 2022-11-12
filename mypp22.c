// Write a program which accept number from user and Display its non factors

#include<stdio.h>
///////////////////////////////////////////////
// Function name: NonFact
// Input:         Integer
// Output:        Void
// Description:   used to get non-factors of number
///////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt=0;
    printf("The Non-Factors of number are...\n");
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);

    return 0;
}