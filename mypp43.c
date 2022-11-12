// program which accepts N numbers from user and display odd numbers from them
#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int Arr[],int Size)
{
    int i=0;
    printf("The Odd numbers are :\n");
    for(i=0;i<Size;i++)
    {
        if(Arr[i]%2 != 0)
        {
            printf("%d\n",Arr[i]);
        }
    }

}


int main()
{
    int iCnt=0,iSize=0;
    int *ptr=NULL;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    if(ptr==NULL)
    {
        printf("unable to alloacte memory\n");
    }

    printf("Enter the elements of the array\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayOdd(ptr,iSize);

    free(ptr);



    return 0;
}