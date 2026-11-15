/*
    Input  :    "abcd"
    Output :    "dcba"

    Input  :    "abba"
    Output :    "abba"
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrRevx
// Input         : character
// Output        : Integer
// Description   : Accept string from user and reverse that string
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int iCnt = 0;
    char temp;
    char *ptr = str;

    while(*ptr != '\0')
    {
        iCnt++;
        ptr++;
    }

    for(int i = 0; i < iCnt / 2; i++)
    {
        temp = str[i];
        str[i] = str[iCnt - i - 1];
        str[iCnt - i - 1] = temp;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Modified String is %s",Arr);

    return EXIT_SUCCESS;
}