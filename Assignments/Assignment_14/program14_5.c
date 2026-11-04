#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Input         : Integer
// Output        : Integer
// Description   : Accept Number from user and return summation of all its non factors
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        else
        {
            iDiff = iDiff + iCnt;
        }
    }

    return (iSum - iDiff);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}