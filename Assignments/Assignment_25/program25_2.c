/*
    Input  :    F
    Output :    True

    Input  :    d
    Output :    False
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkCapital
// Input         : character
// Output        : 
// Description   : Accept string from user and check whether is it capital or not
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("it is Capital");
    }
    else
    {
        printf("it is not Capital");
    }

    return EXIT_SUCCESS;
}