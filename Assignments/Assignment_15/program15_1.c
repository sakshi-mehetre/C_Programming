#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description   : Accept name from user and print that name
// Date          : 04/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name :");
    scanf("%[^\n]s",&Name);

    printf("your name is %s",Name);

    return EXIT_SUCCESS;
}

