// write a program which accepts string from user and return diffrence of frequency 
// of capital and small characters

#include<stdio.h>
////////////////////////////////////////////////
// Function name:   Difference
// Input:           Character pointer
// Output:          Integer
// Description:     return the difference between smallcase and capitalcase
//////////////////////////////////////////////////
int Differnce(char *str)
{
    int iCnt1=0,iCnt2=0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
        {
            iCnt1++;
        }
        else if((*str >= 65) && (*str <= 90))
        {
            iCnt2++;
        }
        
        str++;
    }
    if(iCnt1 > iCnt2)
    {
        return iCnt1-iCnt2;
    }
    else
    {
        return iCnt2-iCnt1;
    }

    
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet=Differnce(Arr);
    printf("The diffrence is %d\n",iRet);



    return 0;
}

