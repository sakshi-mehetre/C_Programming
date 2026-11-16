/*
    Input  :   Q
Output :   Q    R   S   T   U   V   W   X   Y   Z

    Input  :    m
    Output :    m   l   k   j   i   g   h   f   e   d   c   b   a
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dispaly
// Input         : character
// Output        : character
// Description   : Accept char from user. if it is capital then display all the character
//                 from the input character till Z. if input char is small the print
//                 all char in reverse order
// Date          : 15/11/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char cCnt = '\0';
    
    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c ", cCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt <= 'z'; cCnt++)
        {
            printf("%c ", cCnt);
        }
    }
    else
    {
        printf("Invalid character");
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