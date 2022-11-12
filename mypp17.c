//Write a program which accepts number from user and print even factors of numbers

#include<stdio.h>

////////////////////////////////////////
// Function name:   EvenFactors
// Input:           Integer
// Output:          void
// Description:     Used to find Even factors
//////////////////////////////////////////
void EvenFactors(int iNo)
{
    int i=0;
    for(i=1;i<=(iNo/2);i++)
    {
        if(iNo % i == 0)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",i);
            }
        }
    }

}

int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    EvenFactors(iValue);


    return 0;
}