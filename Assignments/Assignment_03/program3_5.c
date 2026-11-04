#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Chkvowel
// Input         : charcater
// Output        : None
// Description   : check the character is vowel or not 
// Date          : 22/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if((CValue == 'a') || (CValue == 'e') || (CValue == 'i') || (CValue == 'o') || (CValue == 'u') ||
            (CValue == 'A') || (CValue == 'E') || (CValue == 'I') || (CValue == 'O') || (CValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}