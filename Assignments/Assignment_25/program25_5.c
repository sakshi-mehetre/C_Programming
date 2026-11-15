/*
    Input  :    C
    Output :    your exam at 9.20AM

    Input  :    d
    Output :    Your exam at 10.30 AM
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplaySchhedule
// Input         : character
// Output        : 
// Description   : Accept division of student from user and depend on the division display exam timing.
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("your Exam at 7 AM");
    }
    else if(chDiv == 'B')
    {
        printf("youe Exam at 8:30 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your Exam at 9:30 AM ");
    }
    else if(chDiv == 'D')
    {
        printf("your Exam time is 10:30 AM");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Yor Division :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}