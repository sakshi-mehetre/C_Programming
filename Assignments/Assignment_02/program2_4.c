#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer,Integer
//  Output          :   None
//  Description     :   Accept two numbers from user and display first number in second numbaer of times
//  Date            :   20/10/2026
//  Author          :   Sakshi Dnyaneshwar Mehetre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int ifrequency)
{
    int i = 0;

    //updator
    if(ifrequency <= 0)
    {
        ifrequency = - ifrequency;
    }

    if(iNo <= 0)
    {
        iNo = -iNo;
    }


    for(i = 1; i <= ifrequency; i++)
    {
        printf(" %d", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    printf("enter frequency: \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}