/*
    Input  :    Marvellous Multi OS
                M
    Output :    2

    Input  :    Marvellous Multi OS
                W
    Output :    0
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Input         : character
// Output        : Integer
// Description   : Accept string from user and accept one character. return frequency of that character
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
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

    iRet = CountChar(Arr, cValue);

    printf("Character frequency is %d", iRet);

    return EXIT_SUCCESS;
}