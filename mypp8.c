// program to find sum of factors of given number
#include<stdio.h>

/////////////////////////////////////
// Function name:   SumFactors
// Input:           integer
// Output:          integer 
// Description:     used to find sum of factors of number
/////////////////////////////////////
int SumFactors(int iNo)
{
    int i=0,iSum=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i=1;i<=(iNo/2);i++)    
    {
        if(iNo % i == 0)
        {
            iSum=iSum+i;
           
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

    iRet=SumFactors(iValue);
    printf("The sum of factors is %d\n",iRet);

    return 0;
}