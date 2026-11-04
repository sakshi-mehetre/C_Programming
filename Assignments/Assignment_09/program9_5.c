#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Factorial difference
// Input         : integer
// Output        : none
// Description   : Return difference between even factorial and odd factorial
// Date          : 02/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 0;
    int iOddFact = 0;

    iEvenFact = 1;
    iOddFact = 1;

    //updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return(iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number  : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial  difference is %d",iRet);

    return EXIT_SUCCESS;
}