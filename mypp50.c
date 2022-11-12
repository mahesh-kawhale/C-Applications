// Accept N numbers from user and accept one another number as No and check whether
// number is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
///////////////////////////////////////////////
// Function name:   ChkNumber
// Input:           Integer Array,Integer,Integer
// Output:          Boolean
// Description:     Check a number is present or not
/////////////////////////////////////////////////
bool ChkNumber(int Arr[],int iLen,int iNo)
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
        return false;
    }
    else
    {
        return true;
    }

}


int main()
{
    int iSize=0,iCnt=0,iValue=0;
    bool bRet=false;
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

    bRet=ChkNumber(ptr,iSize,iValue);
    if(bRet==true)
    {
        printf("%d number is peresent\n",iValue);
    }
    else
    {
        printf("%d number is not present\n",iValue);
    }

    free(ptr);


    return 0;
}