/*
    Input  :    What IS your NAME
    Output :    what is your name
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : strlwrx
// Input         : character
// Output        : character
// Description   : Accept number of rows and column from user and display below pattern
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}