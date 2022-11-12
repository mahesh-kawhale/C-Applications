// program which is used to reverse the string
#include<stdio.h>
////////////////////////////////////////////////
// Function name:   StrRevX
// Input:           Character pointer
// Output:          Void
// Description:     Reverse the string
//////////////////////////////////////////////////
void StrRevX(char *str)
{
    char *start=str;
    char *end=str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start<=end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;  
    }

    //str++;

}


int main()
{
    char arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Updated string is %s:",arr);


    return 0;
}