/*
    Input  :   "marvellous"
    Output :    True

    Input  :   "Demo"
    Output :    True
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Input         : character
// Output        : Integer
// Description   : Accept string from user and check whether it contains vowels in it or not
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
        }       
        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}