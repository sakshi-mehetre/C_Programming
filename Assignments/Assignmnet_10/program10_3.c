#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Input         : integer
// Output        : none
// Description   : Accept the distance in kilometer and convert it into meter.
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("covert to meter is %d",iRet);

    return EXIT_SUCCESS;
}