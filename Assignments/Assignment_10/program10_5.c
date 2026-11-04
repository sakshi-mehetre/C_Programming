#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Input         : integer
// Output        : none
// Description   : Accept area in square feet and convert it into square meter.
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dSquarefeet = 0.0;

    dSquarefeet = iNo * 0.0929;

    return dSquarefeet;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter %lf",dRet);

    return EXIT_SUCCESS;
}