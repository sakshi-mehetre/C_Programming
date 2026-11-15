/*
    Input  :    7
    Output :    True

    Input  :    d
    Output :    False
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkDigit
// Input         : character
// Output        : 
// Description   : Accept string from user and check whether is it Digit or not
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= '1' && ch <= '9')
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("it is Digit");
    }
    else
    {
        printf("it is not Digit");
    }

    return EXIT_SUCCESS;
}