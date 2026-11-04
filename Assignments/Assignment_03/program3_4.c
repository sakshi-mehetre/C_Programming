#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Input         : chracter
// Output        : None
// Description   : Lwer case to upper case and vise versa
// Date          : 22/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayConvert(char CValue)
{
    if(islower(CValue))
    {
        printf("%c\n", toupper(CValue));
    }
    else if(isupper(CValue))
    {
        printf("%c\n", tolower(CValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("enter character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}