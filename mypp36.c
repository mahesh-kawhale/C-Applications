// Write a program which accepts number from user and return the count of even digits

#include<stdio.h>
//////////////////////////////////////////////////
// Function name:    CountEven
// Input:            Integer
// Output:           Integer
// Description:      Used to count the even digits
////////////////////////////////////////////////////   

int CountEven(int iNo)
{
    int iDigit=0;
    int iCount=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;
        if((iDigit%2)==0)
        {
            iCount++;
        }
        iNo = iNo / 10;

    }
    return iCount;


}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("The count of even is %d\n",iRet);


    return 0;
}