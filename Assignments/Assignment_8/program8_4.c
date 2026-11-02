#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Input         : integer
// Output        : none
// Description   : Accept number from user and display its table.
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    //updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}