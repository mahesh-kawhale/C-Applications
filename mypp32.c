// Accept two numbers from user and find the power of the first number of second
#include<stdio.h>
typedef unsigned long int ULONG;

//////////////////////////////////////////////
// Function name:   Power
// Input:           Integer,Integer
// Output:          Unsigned long integer
// Description:     Used to get power of number
///////////////////////////////////////////////
ULONG Power(int iNo1,int iNo2)
{
    register int i=0;
    ULONG iAns=1;
    for(i=1;i<=iNo2;i++)
    {
        iAns=iAns*iNo1;
    }
    return iAns;

}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    ULONG iRet=0;

    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);

    iRet=Power(iValue1,iValue2);
    printf("The output is %ld\n",iRet);

    return 0;
}