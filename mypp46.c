// program which accepts N numbers from user and display all such numbers which are 
// divisible by 5

#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int Size)
{
    int iCnt=0;
    printf("The numbers which are divisible by 5 are\n");
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        if(Arr[iCnt] % 5==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
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

    Display(ptr,iSize);

    free(ptr);

    
    return 0;
}