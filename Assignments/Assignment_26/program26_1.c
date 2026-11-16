#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Description   : Write a table which contain ASCII table
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%x\t%o\n", iCnt ,iCnt ,iCnt);
    }
    
}

int main()
{

    DisplayASCII();

    return EXIT_SUCCESS;
}