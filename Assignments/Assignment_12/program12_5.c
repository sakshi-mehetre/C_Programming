#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Count
// Input         : Integer
// Output        : None
// Description   : Accept number from user and count frequency of such a digit are less than 6.
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    //updator
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = Count(iValue);
    printf("%d",bRet);

    return 0;
}