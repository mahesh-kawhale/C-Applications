// accept N number from user and accpet one another number as NO
// return Last occurence of that number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
// Function name:   LastOccur
// Input:           Integer Array,Integer,Integer
// Output:          Integer
// Description:     return the Last occurance of the number
/////////////////////////////////////////////////
int LastOccur(int Arr[],int iLen,int iNo)
{
    int i=0,iTemp=0;
    for(i=iLen-1;i>=0;i--)
    {
        if(Arr[i] == iNo)
        {
            iTemp=i;
            break;
        }
    }
    if(i==-1)
    {
        return -1;
    }
    else
    {
        return iTemp;
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

    iRet=LastOccur(ptr,iSize,iValue);
    
    printf("The Last occurance of the number is %d\n",iRet);

    
    free(ptr);

    return 0;
}