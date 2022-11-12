
// Accept one number from user and if number is less than 10 print "hello " otherwise "Demo"

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}


int main()
{
    int iValue=0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
