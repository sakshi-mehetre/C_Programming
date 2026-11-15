/*
    Input  :    Sakshi123mds457
    Output :    123457
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Input         : character
// Output        : Integer
// Description   : Accept string form user and Dispaly inly digits from that string
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    printf("Digits are : ");
    DisplayDigit(arr);

    return EXIT_SUCCESS;
}