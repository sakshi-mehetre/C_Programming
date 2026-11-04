#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Accept one from user and print that number of * on screen
//  Author           : Sakshi Dnyaneshwar Mehetre
//  Date            :   20/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{

    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > iCnt)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}