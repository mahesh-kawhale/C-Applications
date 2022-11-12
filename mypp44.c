// program which accepts N numbers from user and return the Smallest number from it
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////
// Function name:   SmallestNumber
// Input:           Integer Array,Integer
// Output:          Integer
// Description:     return smallest number from the N numbers
/////////////////////////////////////////////////
int SmallestNumber(int Arr[],int Size)
{
    int iCnt=0;
    int iSmall=Arr[0];

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        if(iSmall > Arr[iCnt])
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;

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

    iRet=SmallestNumber(ptr,iSize);

    printf("The Smallest number from the array is %d\n",iRet);

    free(ptr);

    
    return 0;
}