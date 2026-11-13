/*
    Input :     iRow = 6     iCol = 6
    Output : 
                *   *   *   *   *   *
                *               *   *        
                *           *       *
                *       *           *   
                *   *               *
                *   *   *   *   *   *
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

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if( i == 1 || i == iRows || j == 1 || j == iCol || i+j == iRows +1)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }

        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows :");
    scanf("%d", &iValue1);

    printf("Enter the number of column :");
    scanf("%d", &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}