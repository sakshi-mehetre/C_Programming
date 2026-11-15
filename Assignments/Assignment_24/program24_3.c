/*
    Input  :    Marvellous Multi OS
                M
    Output :    0

    Input  :    Marvellous Multi OS
                W
    Output :    -1
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Input         : character
// Output        : Integer
// Description   : Accept string from user and accept one character. return index of first occurence of that character
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt ;
        }
        iCnt++;
        str++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cValue);

    printf("Character frequency is %d", iRet);

    return EXIT_SUCCESS;
}