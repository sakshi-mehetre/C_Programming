///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEven
// Input         : Integer
// Output        : None
// Description   : Accept the number from user and check whether number is even or odd
// Date          : 20/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1;
#define False 0;

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}

int main()
{
    int iValue = 0;
    bool bRet = False;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    return 0;

}