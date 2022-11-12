// Accept two number from user and display first number in second number of times
#include<stdio.h>

void Display(int iNo,int iFreq)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iFreq;iCnt++)
    {
        printf("%d\t",iNo);
    }
    
}

int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);                                                                         

    return 0;
}