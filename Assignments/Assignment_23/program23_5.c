/*
    Input  :    Sakshi
    Output :    0

    Input  :    Sakshi__Mehetre
    Output :    2
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Input         : character
// Output        : character
// Description   : Accept string form user and count white spaces
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Count of Whitespaces are :%d\n", iRet);

    return EXIT_SUCCESS;
}