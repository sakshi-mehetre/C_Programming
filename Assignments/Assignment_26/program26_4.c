/*
    Input  :   %
    Output :   True

    Input  :   d
    Output :   False
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Input         : character
// Output        :
// Description   : Accept character from user and check whether it is special symbol or not
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') ||
       (ch >= 'a' && ch <= 'z') ||
       (ch >= '0' && ch <= '9'))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == 1)
    {
        printf("It is a special symbol");
    }
    else
    {
        printf("It is not a special symbol");
    }

    return EXIT_SUCCESS;
}
