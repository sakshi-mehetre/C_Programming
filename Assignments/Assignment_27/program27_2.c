/*
    Input  :    "Marvellous"
    Output :    9
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Input         : character
// Output        : Integer
// Description   : Accept string from user and count number of samll charaters
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(Arr);

    printf("Samll letters are %d\n", iRet);

    return EXIT_SUCCESS;
}