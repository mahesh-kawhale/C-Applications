
//program to divide two numbers
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Divide
//  Description :      Used to perform division of 2 numbers
//  Input :              Integer, Integer
//  Output :            Integer
//  Author :            Mahesh Pratap Kawhale
//
/////////////////////////////////////////////////////////////////////
int Divide(int ino1,int ino2)
{
    int ians=0;
    if(ino2>ino1)
    {
        return -1;
    }
    ians=ino1/ino2;
    return ians;

}

int main()
{
    int ivalue1=15,ivalue2=5;
    int iret=0;

    iret=Divide(ivalue1,ivalue2);
    printf("Division is %d\n",iret);

    return 0;
}