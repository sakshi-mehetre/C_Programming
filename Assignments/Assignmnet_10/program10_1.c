#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Input         : float
// Output        : none
// Description   : Accept the radius form user and calculate its area.
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPI = 3.14;

    dArea = (fPI * fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter number : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf",dRet);

    return EXIT_SUCCESS;
}