// Accept N numbers from user and return the frequency of even numbers
#include<stdio.h>
#include<stdlib.h>

int FreqOfEven(int Arr[],int Size)
{
    int i=0,iCnt=0;
    for(i=0;i<Size;i++)
    {
        if(Arr[i] % 2==0)
        {
            iCnt++;
        }
    }
    return iCnt;

}


int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

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

    iRet=FreqOfEven(ptr,iSize);
    
    printf("The Frequency of even numbers is %d\n",iRet);

    free(ptr);


    return 0;
}