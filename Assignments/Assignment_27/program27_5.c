/*
    Input  :    "MarvellouS"
    Output :    "SuollevraM"

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Input         : character
// Output        : Integer
// Description   : Accept string from user and display it inn reverse order
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
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

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Modified String is %s",Arr);

    return EXIT_SUCCESS;
}