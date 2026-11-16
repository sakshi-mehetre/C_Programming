/*
    Input  :    Marvellous Multi OS
                
    Output :    4
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Input         : character
// Output        : Integer
// Description   : Accept string from user and count number of capital character
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Capital letters are %d\n", iRet);

    return EXIT_SUCCESS;
}