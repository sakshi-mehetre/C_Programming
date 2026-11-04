#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Input         : Integer, Integer, Integer
// Output        : Integer
// Description   : Accept three number frpm user and prints it's Multiplication
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }

    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }

    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three number : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three number %d", iRet);

    return EXIT_SUCCESS;
}