/*
    Input  :    Marvellous Multi OS
                e
    Output :    TRUE

    Input  :    Marvellous Multi OS
                W
    Output :    False
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : chkChar
// Input         : character
// Output        : character
// Description   : Check whether that character is present in string or not
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}