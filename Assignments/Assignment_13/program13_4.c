#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Input         : Integer
// Output        : Integer
// Description   : Accept number from user and return multiplication of all digits.
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    iCount = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit != 0)
        {
            iCount = iCount * iDigit;
        }
        
        iNo = iNo /10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}