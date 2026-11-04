#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Input         : Integer
// Output        : Integer
// Description   : Accept number from user and return addition of all evens number in between range
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;  
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return EXIT_SUCCESS;
}