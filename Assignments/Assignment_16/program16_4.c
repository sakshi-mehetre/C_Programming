/*
    Input :     iRow = 4     iCol = 5
    Output : 
                4   4   4   4   4   4
                3   3   3   3   3   3
                2   2   2   2   2   2
                1   1   1   1   1   1
*/


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : pattern
// Description   : Accept number of rows and column from user and display below pattern
// Date          : 12/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 1,iCnt = 4; i <= iRows; i++, iCnt--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows :");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns :");
    scanf("%d", &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}