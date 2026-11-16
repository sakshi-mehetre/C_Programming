/*
    Input  :  A
    Output :  Decimal       65
              Octal        0101
              Hexadecimal   0X41
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : character
// Output        : 
// Description   : Accept charater from user and display its ASCII value in decimal octal and hexadecimal format.
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("Decimal %d\tOctal %o\tHexadecimal %x\n", ch, ch,ch);
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