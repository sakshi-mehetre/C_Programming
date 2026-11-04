#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : None
// Description   : Displays * character according to the given number
// Date          : 20/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt = 0;

    // updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf(" * ");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);
}