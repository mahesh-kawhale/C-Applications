#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////
// Function name:   HighestNumber
// Input:           Integer Array,Integer
// Output:          Integer
// Description:     return highest number from the N numbers
/////////////////////////////////////////////////
int HighestNumber(int Arr[],int Size)
{
    int iCnt=0;
    int iHigh=Arr[0];

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        if(iHigh < Arr[iCnt])
        {
            iHigh = Arr[iCnt];
        }
    }
    return iHigh;

}

int main()
{
    int iCnt=0,iSize=0,iRet=0;
    int *ptr=NULL;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memeory\n");
        return -1;
    }

    printf("Enter the elements of Array\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=HighestNumber(ptr,iSize);

    printf("The highest number from the array is %d\n",iRet);

    free(ptr);

    
    return 0;
}