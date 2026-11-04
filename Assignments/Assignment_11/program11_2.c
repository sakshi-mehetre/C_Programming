#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Input         : Integer
// Output        : Integer
// Description   : Accept number from user and display all even number in between the range
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}