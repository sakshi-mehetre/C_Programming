#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Input         : integer
// Output        : none
// Description   : Accept the temperature in Fahrenheit and convert it into celcius.
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = (fTemp - 32) * (5.0 / 9.0);

    return dCelcius;
    
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperaturn in Fahrenheit ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius %lf",dRet);

    return EXIT_SUCCESS;
}