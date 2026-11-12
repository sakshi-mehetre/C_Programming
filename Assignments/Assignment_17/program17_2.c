/*
    Input :     iRow = 4     iCol = 4
    Output : 
                2   4   6   8   
                1   3   5   7
                2   4   6   8
                1   3   5   7
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
    int iCnt = 1;

    for(i = 1, iCnt = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCol; j++, iCnt += 2)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
            else
            {
                printf("%d\t",iCnt+1);
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