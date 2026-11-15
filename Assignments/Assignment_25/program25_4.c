/*
    Input  :    g
    Output :    TRUE

    Input  :    D
    Output :    False
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Input         : character
// Output        : 
// Description   : Accept string from user and check whether is it Samll or not
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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
    scanf("%[^'\n']s",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("it is Small Case character");
    }
    else
    {
        printf("it is not Small character");
    }

    return EXIT_SUCCESS;
}