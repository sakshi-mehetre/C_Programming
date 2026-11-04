
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Input         : Integer, Integer
// Output        : Float
// Description   : Accept total marks and obtained marks and calculate percentage.
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fPercentage = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }

    fPercentage = ((float)iObtained / iTotal) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    if(iValue1 == 0)
    {
        printf("Invalid total marks\n");
    }
    else
    {
        printf("Percentage is : %.2f%%\n", fRet);
    }

    return EXIT_SUCCESS;
}
