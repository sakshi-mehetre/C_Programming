/*
    Input :    8
    Output :    2   4   6   8   10  12  14  16 
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


void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}