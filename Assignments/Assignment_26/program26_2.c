/*
    Input  :    Q
    Output :    q

    Input  :    m
    Output :    M
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : character
// Output        : character
// Description   : Accept char from user and if char is small display its corresponding capital and vice versa
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Charater :");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}