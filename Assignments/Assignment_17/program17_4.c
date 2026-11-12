/*
    Input :     iRow = 5     iCol = 5
    Output : 
                1   2   3   4   5
               -1  -2  -3  -4  -5
                1   2   3   4   5
               -1  -2  -3  -4  -5
                1   2   3   4   5
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

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1, iCnt = 1; j <= iCol; j++, iCnt++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", -iCnt);
            }
            else
            {
                printf("%d\t",iCnt);
            }
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