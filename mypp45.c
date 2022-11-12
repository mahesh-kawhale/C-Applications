// program which accepts N numbers from user and return the sum of even numbers from it
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////
// Function name:   EvenSum
// Input:           Integer Array,Integer
// Output:          Integer
// Description:     return the sum of even numbers
/////////////////////////////////////////////////
int EvenSum(int Arr[],int Size)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        if(Arr[iCnt] % 2==0)
        {
            iSum=iSum+Arr[iCnt];
        }
    }
    return iSum;

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

    iRet=EvenSum(ptr,iSize);

    printf("The Sum of even numbers from the array  is %d\n",iRet);

    free(ptr);

    
    return 0;
}