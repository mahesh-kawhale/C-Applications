// accept N number from user and accpet one another number as NO
// return first occurence of that number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
// Function name:   FirstOccur
// Input:           Integer Array,Integer,Integer
// Output:          Integer
// Description:     return the first occurance of the number
/////////////////////////////////////////////////
int FirstOccur(int Arr[],int iLen,int iNo)
{
    int i=0;
    for(i=0;i<iLen;i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
    }
    if(i==iLen)
    {
        return -1;
    }
    else
    {
        return i;
    }

}


int main()
{
    int iSize=0,iCnt=0,iValue=0;
    int iRet=0;
    int *ptr=NULL;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    printf("Enter the number you want to check\n");
    scanf("%d",&iValue);

    ptr=(int*)malloc(iSize*sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to alloacte memory\n");
    }

    printf("Enter the elements of Array\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=FirstOccur(ptr,iSize,iValue);
    if(iRet==-1)
    {
        printf("The given number is not present\n");
    }
    else
    {
        printf("The first occurance of the number is %d\n",iRet);

    }
    
    free(ptr);


    return 0;
}