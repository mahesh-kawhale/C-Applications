// program which is used to find binary of number

#include<stdio.h>

void FindBinary(int iNo)
{
    int iDigit=0;

    while(iNo != 0)
    {
        iDigit=iNo % 2;

        printf("%d\n",iDigit);

        iNo=iNo/2;

    }
    printf(" ");

}

int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    FindBinary(iValue);


    return 0;
}