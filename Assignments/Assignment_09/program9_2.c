#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DollorToENR
// Input         : integer
// Output        : none
// Description   : Accept amount in US dollor and return its corresponding value in indian currency
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iRupees = 0;

    iRupees = iNo * 70;

    return iRupees;   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Indian Currency is: %d",iRet);

    return EXIT_SUCCESS;
}