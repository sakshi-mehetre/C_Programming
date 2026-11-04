#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactor
// Input         : integer
// Output        : None
// Description   : print even factor of input number 
// Date          : 22/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayEvenFactor(int iNo)
{
    int i = 0;

    //updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i<= iNo/2; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS; 
}