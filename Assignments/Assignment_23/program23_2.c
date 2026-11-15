/*
    Input  :    What IS your NAME
    Output :    WHAT IS YOUR NAME
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : struprx
// Input         : character
// Output        : character
// Description   : Accept string form user and convert it into Upper case
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}