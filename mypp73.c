// program which is used to copy data from one string to another
#include<stdio.h>

////////////////////////////////////////////////
// Function name:   StrCopyX
// Input:           Character pointer,character pionter
// Output:          Void
// Description:     copy data from one string to another
//////////////////////////////////////////////////

void StrCopyX(char *Src,char *Dest)
{
    while(*Src != '\0')
    {
        *Dest=*Src;
        Src++;
        Dest++;
    }
    
    *Dest='\0';

}


int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string from which you want to copy\n ");
    scanf("%[^'\n']s",Arr);

    StrCopyX(Arr,Brr);

    printf("The Data from String is %s",Brr);


    return 0;
}