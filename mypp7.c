// program to find factors of given number
#include<stdio.h>

/////////////////////////////////////
// function name:    FindFactors
// input:            integer
// output:           void
// description:      find factors of number
/////////////////////////////////////
void FindFactors(int iNo)
{
    int i=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i=1;i<=(iNo/2);i++)    
    {
        if(iNo % i == 0)
        {
            printf("%d   ",i);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    FindFactors(iValue);

    return 0;
}