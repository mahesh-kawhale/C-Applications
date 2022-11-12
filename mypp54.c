// Accept N numbers from user and return the product of even numbers
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////
// Function name:   Product
// Input:           Integer Array,Integer
// Output:          Integer
// Description:     return the product of all even numbers
//////////////////////////////////////////////////
int Product(int Arr[],int iLen)
{
    int iCnt=0,iProd=1;

    for(iCnt=0;iCnt<iLen;iCnt++)
    {
        if(Arr[iCnt] % 2 ==0)
        {
            iProd=iProd*Arr[iCnt];

        }
        
    }

    return iProd;
}


int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Product(ptr,iSize);

    printf("The output is :%d\n",iRet);

    free(ptr);

    return 0;
}