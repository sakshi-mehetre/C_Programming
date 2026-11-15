/*
    Input  :    Marvellous Multi OS
                M
    Output :    11

    Input  :    Marvellous Multi OS
                W
    Output :    -1
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LastChar
// Input         : character
// Output        : Integer
// Description   : Accept string from user and accept one character. return index of lat occurrence of that character
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt ;
        }
        iCnt++;
        str++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Character frequency is %d", iRet);

    return EXIT_SUCCESS;
}