// Accept one character from user and check whether that character is vowel or not

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////
// Function name: ChkVowel;
// Input:         Character
// Output:        Boolean
// Description:   used to check vowel is present or not
//////////////////////////////////////////////

bool ChkVowel(char Ch)
{
    if((Ch=='a')||(Ch=='e')||(Ch=='i')||(Ch=='o')||(Ch=='u')||
    (Ch=='A')||(Ch=='E')||(Ch=='I')||(Ch=='O')||(Ch=='U'))
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if(bRet==true)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }


    return 0;
}