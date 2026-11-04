#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Input         : Integer
// Output        : Integer
// Description   : Accept number from user and display all number in between range in reverse order 
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
//////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}