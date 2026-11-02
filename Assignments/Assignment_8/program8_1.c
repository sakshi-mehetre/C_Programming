#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Input         : integer
// Output        : none
// Description   : number is less than 50 print small,
//                 number is greater than 50 and less than 100 print medium
//                 number is greater than 100 print large
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}