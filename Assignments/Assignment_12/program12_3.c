#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckTwo
// Input         : Integer
// Output        : Integer
// Description   : Accept number from user and count frequency of 2 in it
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    bRet = CountTwo(iValue);
    printf("%d",bRet);

    return 0;
}