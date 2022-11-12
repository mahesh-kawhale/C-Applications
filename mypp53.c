// Accept N number from user and Accepet range Display all elemnts from that range

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
// Function name:   RangeDisplay
// Input:           Integer Array,Integer,Integer,iNteger
// Output:          Void
// Description:     Display numbers between range
//////////////////////////////////////////////////

void RangeDisplay(int Arr[],int iLen,int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLen;iCnt++)
    {
        if(((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd)))
        {
            printf("The output is :%d\n",Arr[iCnt]);
        }
    }      
  
}

int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;
    int iValue1=0,iValue2=0;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    ptr=(int*)malloc(iSize*sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    RangeDisplay(ptr,iSize,iValue1,iValue2);

    free(ptr);
    
     
    return 0;
}