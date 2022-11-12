// Accept N numbers from user and display the numbers which contains 3 digit in it
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////
// Function name:   DigitDisplay
// Input:           Integer Array,Integer
// Output:          Void
// Description:     Display the numbers which conatins 3 digit in it
//////////////////////////////////////////////////
int DigitDisplay(int Arr[],int iLen)
{
    int iCnt=0,iDigit=0,iCnt2=0,iTemp=0;;
    
    printf("The numbers which conatins 3 digit in it are\n");
    for(iCnt=0;iCnt<iLen;iCnt++)
    {
        iTemp=Arr[iCnt];
        while(Arr[iCnt] != 0)
        {
            iDigit=Arr[iCnt] % 10;

            if(iDigit==3)
            {
                printf("%d\n",iTemp);
                break;
            }

            Arr[iCnt]=Arr[iCnt]/10;
        } 
    }

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

    DigitDisplay(ptr,iSize);


    free(ptr);

    return 0;
}