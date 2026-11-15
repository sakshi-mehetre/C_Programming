/*
    Input  :    What IS your NAME
    Output :    wHAT is YOUR name
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : strtoggle
// Input         : character
// Output        : character
// Description   : Accept string form user and convert it into toggle case
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void strtoggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    strtoggle(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}