#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Chkzero
// Input         : Integer
// Output        : None
// Description   : Accept number from user and check whether it contain 0 in it or o not.
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contain Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}