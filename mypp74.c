// program which is used to copy data from one string to another
#include<stdio.h>

////////////////////////////////////////////////
// Function name:   StrCopyX
// Input:           Character pointer,character pionter,Integer
// Output:          Void
// Description:     copy data from one string to another with specific characters
//////////////////////////////////////////////////


void StrCopyX(char *Src,char *Dest,int iCnt)
{
    while((*Src != '\0') && (iCnt != 0))
    {
        *Dest=*Src;
        Src++;
        Dest++;
        iCnt--;
    }
    
    *Dest='\0';

}


int main()
{
    char Arr[20];
    char Brr[20];
    int iCnt=0;


    printf("Enter the string from which you want to copy\n ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the number of characters you want to copy\n");
    scanf("%d",&iCnt);

    StrCopyX(Arr,Brr,iCnt);

    printf("The Data from String is %s",Brr);


    return 0;
}