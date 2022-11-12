// program to display the numbers 
#include<stdio.h>

///////////////////////////////////////////
// function name:   Display
// description:     used to print numbers
// input:           integer
// output:          void
///////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number upto which you want to print\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}