/*
    Input :     iRow = 5     iCol = 5
    Output : 
                a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e   
                1   2   3   4   5   
                a   b   c   d   e   
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
    char ch = '\0';

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1,ch = 'a', iCnt = 1; j <= iCol; j++,ch++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCnt);
                iCnt++;
            }
            else
            {
                printf("%c\t",ch);
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