/*
    Input  :    "MarvellouS"
    Output :    6   (8-2)
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Input         : character
// Output        : Integer
// Description   : Accept string from user and return difference between frequency of small and capital
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCapital = 0;
    int iSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Capital letters are %d\n", iRet);

    return EXIT_SUCCESS;
}