/*
    Input  :    F
    Output :    True

    Input  :   &
    Output :   False
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CharAlpha
// Input         : character
// Output        : 
// Description   : Accept string from user and check whether is it alphabet or not
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CharAlpha(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character :");
    scanf("%c",&cValue);

    bRet = CharAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is Character");
    }
    else
    {
        printf("it is not charater");
    }

    return EXIT_SUCCESS;
}