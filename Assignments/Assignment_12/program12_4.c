#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountFour
// Input         : Integer
// Output        : Integer
// Description   : Accept number from user and count frequency of 4 in it.
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
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
        if(iDigit == 4)
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

    bRet = CountFour(iValue);
    printf("%d",bRet);

    return 0;
}